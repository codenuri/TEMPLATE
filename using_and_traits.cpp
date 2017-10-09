/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : using_and_traits.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <type_traits>
using namespace std;

// C++14 의 공식 표준
//template<typename T> using remove_pointer_t = typename remove_pointer<T>::type;

// C++17
//template<typename T> using is_pointer_v = is_pointer<T>::value;

template<typename T> void foo(T a)
{
	//typename remove_pointer<T>::type n; // n : int
	remove_pointer_t<T> n; // 위와 동일한 표현.

	//if ( is_pointer<T>::value)
	if (is_pointer_v<T>)
	{

	}
}

int main()
{
	int n = 10;
	foo(&n);
}