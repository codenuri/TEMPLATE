/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : traits_summary.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

#include <type_traits> // C++11 

template<typename T> void foo(T a)
{
	// 포인터를 제거한 타입 구하기
	typename remove_pointer<T>::type n1;
	remove_pointer_t<T> n2;

	// 포인터 인지 조사
	//if (is_pointer<T>::value)
	if ( is_pointer_v<T> ) // C++17
	{
		//*a = 10; // error
	}

	// 함수 오버로딩 사용
	foo_imp(a, is_pointer<T>());
}

template<typename T> void foo_imp(T a, true_type) {}
template<typename T> void foo_imp(T a, false_type) {}


int main()
{
	int n = 10;
	foo(&n);
}