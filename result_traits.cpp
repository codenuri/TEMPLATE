/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : result_traits.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <type_traits>
using namespace std;

int f(int a, char c) { return 0; }

// primary template
template<typename T> struct result
{
	typedef T type;
};

// 핵심 !!: 부분 특수화을 통해서 원하는 타입을 구할수 있도록 타입 분할을 한다.
template<typename R, typename A1, typename A2> struct result<R(A1, A2)>
{
	typedef R type;
};

template<typename T> void foo(T& t)  // T : int(int, char)
{
	typename result<T>::type n; 

	cout << typeid(n).name() << endl;
}

int main()
{
	foo(f);
}
