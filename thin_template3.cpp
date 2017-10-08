
/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : thin_template3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/


// 방법 2. void* 기반 컨테이너 + 캐스팅을 책임지는 파생 클래스
// 멤버 함수 2개 * 3개 타입 + 기반 클래스 멤버 함수 2개 => 8개

class VectorBase
{
protected:
	void* buff;
	int sz;
public:
	int size() const;
	bool empty() const;

	void  push_front(const void* a);
	void* front();
};

// 캐스팅만 책임지는 파생 클래스
template<typename T> class Vector : public VectorBase
{
public:
	inline int size() const   { return VectorBase::size(); }
	inline bool empty() const { return VectorBase::empty(); }
	inline void push_front(const T& a) { VectorBase::push_front(static_cast<void*>(a)); }
	inline T& front() { return static_casst<T&>(VectorBase::front());	}
};

int main()
{
	Vector<int>    v1;
	Vector<short>  v2;
	Vector<double> v3;
}