/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : argument.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

int f(int, double, char) { return 0; }

// 함수의 N 번째 인자 타입 구하기.
template<int N, typename T> struct argument
{
	typedef void type;
};

// N == 0 일때
template<typename R, typename A1, typename ... Types> struct argument<0, R(A1, Types...)>
{
	typedef A1 type;
};

// N != 0 일때
template<int N, typename R, typename A1, typename ... Types> struct argument<N, R(A1, Types...)>
{
	typedef typename argument<N-1, R(Types...)>::type type;
};


template<typename T> void foo(T& t)
{
	typename argument<1, T>::type n;

	cout << typeid(n).name() << endl; // double
}

int main()
{
	foo(f);
}