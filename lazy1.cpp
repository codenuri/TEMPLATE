/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : lazy1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

/*
class A
{
	int data;
public:
	void foo() { *data = 10; } // error
};

int main()
{
	A a;
}
*/

template<typename T> class A
{
	int data;
public:
	void foo() { *data = 10; } 
};

int main()
{
	A<int> a;
	a.foo(); // foo를 사용해야만 에러가 발생합니다.
}
