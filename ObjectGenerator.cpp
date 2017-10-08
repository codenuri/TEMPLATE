/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : ObjectGenerator.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/
#include <iostream>
#include <utility>
using namespace std;

template<typename T> class complex
{
	T re, im;
public:
	complex() {}
	complex(T r, T i) {}
};

// 클래스 템플릿의 객체를 만드는 함수 템플릿
template<typename T> complex<T> make_complex(const T& a, const T& b)
{
	return complex<T>(a, b);
}


template<typename T> void foo(T a)
{
}

int main()
{
	// 1. 객체를 만들어서 전달
	complex<int> c1(1, 2);
	foo(c1);

	// 2. 임시객체로 전달, 문제점.. C++14 까지는 int를 생략할수 없다.!
	foo(complex<int>(1, 2));

	// 3. make 함수 사용
	foo(make_complex(1, 2));

	foo(pair<int, double>(1, 3.4));
	foo(make_pair(1, 3.4));

}
