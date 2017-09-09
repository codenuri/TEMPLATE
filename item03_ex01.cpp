/*
* HOME       : www.codelec.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : item03_ex01.cpp
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
	T data;
public:
	void foo() { *data = 10; } // error
};
/*
class A
{
	int data;
public:
};
*/
int main()
{
	A<int> a;
	//a.foo();
}
