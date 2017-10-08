/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : argument_traits.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <type_traits>
using namespace std;

int f(int a, char c) { return 0; }

// primary template
template<int N, typename T> struct argument;
//{
//	typedef void type;
//};

// 핵심 !!: 부분 특수화을 통해서 원하는 타입을 구할수 있도록 타입 분할을 한다.
template<typename R, typename A1, typename A2> struct argument<0, R(A1, A2)>
{
	typedef A1 type;
};

template<typename R, typename A1, typename A2> struct argument<1, R(A1, A2)>
{
	typedef A2 type;
};

template<typename T> void foo(T& t)  // T : int(int, char)
{
	typename argument<0, T>::type n1; // int
	typename argument<1, T>::type n2; // char

	cout << typeid(n1).name() << endl;
	cout << typeid(n2).name() << endl;
}

int main()
{
	foo(f);
}
