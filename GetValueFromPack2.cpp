/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : GetValueFromPack2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <typeinfo>
using namespace std;

// parameter pack 에서 요소 꺼내기 
// 방법 2. recursive

void foo() {} // 재귀의 종료를 위해서..

template<typename T, typename ... Types> 
void foo(T value, Types ... args)
{
	static int n = 0;
	++n;
	cout << n << endl; // 1

	cout << typeid(T).name() << endl;
	cout << value << endl;

	foo(args...); // foo( 'A', 3.4);
				  // foo(3.4)
				  // foo()
}

int main()
{
	foo(1, 'A', 3.4); // T : int,				value : 1
					  // Types :char, double,    args : 'A', 3.4
}














