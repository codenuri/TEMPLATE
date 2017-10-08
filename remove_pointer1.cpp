/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : remove_pointer1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// T에 변형 타입 구하기
// primary template : typedef 제공
template<typename T> struct xremove_pointer
{
	typedef T type;
};

template<typename T> struct xremove_pointer<T*>
{
	typedef T type;
};

template<typename T> void foo(T a)  // T : int*
{
	// 반드시 typename 있어야 합니다.
	typename  xremove_pointer<T>::type n;  

	// n의 타입 이름 출력
	cout << typeid(n).name() << endl;
}

int main()
{
	int n = 10;
	foo(&n);
}

