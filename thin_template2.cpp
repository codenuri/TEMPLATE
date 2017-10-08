/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : thin_template2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// 방법 1. template parameter T를 사용하지 않은 멤버 함수는 기반 클래스로 옮기자
// 멤버 함수 2개 * 3개 타입 + 기반 클래스 멤버 함수 2개 => 8개

class VectorBase
{
protected:
	int sz;
public:
	int size() const;
	bool empty() const;
};
template<typename T> class Vector : public VectorBase
{
	T* buff;
public:
	void push_front(const T& a);
	T& front();
};

int main()
{
	Vector<int>    v1;
	Vector<short>  v2;
	Vector<double> v3;
}