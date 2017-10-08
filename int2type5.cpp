/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : int2type5.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <type_traits>
using namespace std;

template<typename T> struct IsPointer { static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> { static constexpr bool value = true; };

// if 문을 사용한 함수 분기 : 실행시간 결정..
// 함수 오버로딩을 사용한 분기 : 컴파일 시간에 결정..

// 숫자로 함수 오버로딩하는 도구
template<int N> struct int2type
{
	static const int value = N;
};

template<typename T> void printv_imp(T a, int2type<0>)
{
	cout << a << endl;
}

template<typename T> void printv_imp(T a, int2type<1>)
{
	cout << a << " : " << *a << endl;
}

template<typename T> void printv(T a)
{
	// 함수 오버로딩은 컴파일 시간에 인자에 타입으로 함수 호출이 결정된다

	printv_imp(a, int2type< IsPointer<T>::value >());
}

int main()
{
	int n = 3;

	printv(n);
	printv(&n);
}




