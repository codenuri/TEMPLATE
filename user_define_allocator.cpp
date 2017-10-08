/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : user_define_allocator.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <vector>
#include <limits>
using namespace std;

template <class T> class ecAlloc 
{
public:
	typedef T        value_type;
	typedef T*       pointer;
	typedef const T* const_pointer;
	typedef T&       reference;
	typedef const T& const_reference;
	typedef std::size_t    size_type;
	typedef std::ptrdiff_t difference_type;

	// policy clone 을 위한 도구. "rebind" 동영상 참고.
	template <class U> struct rebind 
	{
		typedef ecAlloc<U> other;
	};

	pointer address(reference value) const				{ return &value;	}
	const_pointer address(const_reference value) const 	{ return &value;	}

	ecAlloc() noexcept { }
	ecAlloc(const ecAlloc&) noexcept { }
	~ecAlloc() noexcept { }
	template <class U> ecAlloc(const ecAlloc<U>&) noexcept {}

	size_type max_size() const throw() {
		return numeric_limits<std::size_t>::max() / sizeof(T);
	}

	// 메모리만 할당하는 함수. 초기화(생성자 호출) 하지 않습니다.
	pointer allocate(size_type num, const void* = 0) 
	{
		cerr << "allocate " << num << " element(s)"
			      << " of size " << sizeof(T) << endl;
		pointer ret = (pointer)(::operator new(num * sizeof(T)));
		cerr << " allocated at: " << (void*)ret << endl;
		return ret;
	}

	// 초기화(생성자 호출) 함수. Placement new를 사용합니다.
	void construct(pointer p, const T& value) {		
		new((void*)p)T(value);
	}

	// 객체 파괴(소멸자 호출) 함수
	void destroy(pointer p) {
		p->~T();
	}

	// 메모리 해지
	void deallocate(pointer p, size_type num) {
		cerr << "deallocate " << num << " element(s)"
			<< " of size " << sizeof(T)
			<< " at: " << (void*)p << endl;
		::operator delete((void*)p);
	}
};
// return that all specializations of this allocator are interchangeable
template <class T1, class T2>
bool operator== (const ecAlloc<T1>&, const ecAlloc<T2>&) noexcept
{
	return true;
}
template <class T1, class T2>
bool operator!= (const ecAlloc<T1>&, const ecAlloc<T2>&) noexcept
{
	return false;
}

int main()
{
	vector<int, ecAlloc<int>> v(2, 0);

	v.resize(4);
}
