/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : PackExpansion3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// Parameter Pack 에 있는 모든 요소 출력하기.

//int print(int a) { cout << a << ", "; return 0; }
void print(int a) { cout << a << ", "; }

template<typename ... Types> void foo(Types ... args)
{
	// args : 1,2,3
	//print(args...); // print ( 1,2,3) error
	//print(args)...; // print(1), print(2), print(3)
	// pack expansion 위치 : 함수( args..), { args.. }

	//int dummy[] = { 0,  print(args)... }; // ok. { 0, print(1), print(2), print(3) }
	// {0}

	//int dummy[] = { 0,  (print(args), 0)... }; // ok.

	int dummy[] = { 0,  (cout << args << ", ", 0)... }; // ok.
}

int main()
{
	foo(1, 2, 3);
	//foo();
}











