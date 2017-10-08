/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : result_using_variadic_template.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/
#include <iostream>
using namespace std;


int f(int a, double b) { return 0; }


// 가변 인자 템플릿 기술을 사용해서 함수의 리턴 타입을 구하는 코드 입니다.
template<typename T> struct result
{
	typedef T type;
};

template<typename R, typename ... Types> struct result<R(Types...)>
{
	typedef R type;
};

template<typename T> void foo(T& a) // 여기서 T는 int(int, double) 타입입니다.
{
	typename result<T>::type n;  

	cout << typeid(n).name() << endl;  // int 가 나와야 합니다.
}

int main()
{
	foo(f);
}