/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : decay1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <type_traits>
using namespace std;

// argument decay
template<typename T> void foo(T arg) // int arg[3] = x;
{
	// T : int*
	cout << typeid(T).name() << endl; // int*
}

template<typename T> void goo(T& arg) // T : int[3]    goo(int (&arg)[3])
{
	// T : int[3]
	cout << typeid(T).name() << endl; // int[3]
}

int main()
{
	int x[3] = { 1,2,3 }; //int[3]

	foo(x); //
	goo(x);


//	int y[3] = x; // error
//	int* p = x;  // 배열의 요소의 주소..
//	int(&r)[3] = x; // ok..


}












