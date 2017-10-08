/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : specialization2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

template<typename T, typename U> struct Test
{
	static void foo() { cout << "T, U" << endl; }
};

template<typename T, typename U> struct Test<T*, U>
{
	static void foo() { cout << "T*, U" << endl; }
};

template<typename T, typename U> struct Test<T*, U*>
{
	static void foo() { cout << "T*, U*" << endl; }
};

// 핵심 : 부분 특수화 시에 템플릿 인자의 갯수는 변할수 있다
template<typename T> struct Test<T, T>
{
	static void foo() { cout << "T, T" << endl; }
};

template<typename U> struct Test<int, U>
{
	static void foo() { cout << "int, U" << endl; }
};

// int, int : 특수화..
template<> struct Test<int, int>
{
	static void foo() { cout << "int, int" << endl; }
};

template<> struct Test<int, short>
{
	static void foo() { cout << "int, short" << endl; }
};

int main()
{
	Test<int, double>::foo();	// T,  U
	Test<int*, double>::foo();  // T*, U
	Test<int*, double*>::foo(); // T*, U*
	Test<int, int>::foo();     // T, T => int, int
	Test<int, char>::foo();    // int, U
	Test<int, short>::foo();   // int, short
}

















