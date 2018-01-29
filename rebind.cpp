/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : rebind.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// 실제 allocator 소스는 user_define_allocator.cpp 소스를 참고 하세요.
template<typename T> class allocator
{
public:
	T* allocate(int sz)   { return new T[sz]; }
	void deallocate(T* p) { delete[] p; }

	// 
	template<typename U> struct rebind
	{
		typedef allocator<U> other;
	};
};
// rebind
template<typename T, typename Ax = allocator<T> > class list
{
	struct NODE	{	T data;	NODE *next, *prev;	};

	//Ax ax; // allocator<int>
	//allocator<int>::rebind<NODE>::other ax; // allocator<NODE> ax;
	typename Ax::template rebind<NODE>::other ax; // allocator<NODE> ax;

public:
	void push_front(const T& a)
	{	
		ax.allocate(1);
	}
};

int main()
{
	list<int> s;
	s.push_front(10);

}









