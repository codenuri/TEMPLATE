/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : specialization3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

template<typename T, typename U> struct Test
{
	static void foo() { cout << "T, U" << endl; }
};

// int, 임의의 타입
template<typename U> struct Test<int, U>
{
	static void foo() { cout << "int, U" << endl; }
};


template<typename A, typename B, typename C>
struct Test<Test<A, B>, C>
{
	static void foo() { cout << "Test, C" << endl; }
};

int main()
{
	Test<short, double>::foo();	// T,  U
	Test<int, double>::foo();	// int, U

	Test<Test<short, double>, char>::foo(); // Test, C
}

















