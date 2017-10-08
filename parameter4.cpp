/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : parameter4.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <typeinfo>
using namespace std;

// non-type(값) parameter
// 정수형 상수, enum 상수, 포인터, 함수 포인터, 멤버 함수 포인터.
// c++17 : auto

template<auto N> struct Test
{
	Test()
	{
		cout << typeid(N).name() << endl;
	}
};

int x = 0;

int main()
{
	Test<10> t1; // N : int의 값
	Test<&x> t2; // N : int* 의 값.
	Test<&main> t3;  
}

