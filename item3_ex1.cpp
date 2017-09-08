/*
* HOME       : www.codelec.co.kr
* COURSENAME : C++ Template Programming
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// item03_ex1.cpp

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
