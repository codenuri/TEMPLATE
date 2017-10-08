/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : generic_copy_constructor1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/


#include <iostream>
using namespace std;

template<typename T> class complex
{
	T re;
	T im;
public:
	complex(T a = T(), T b = T()) : re(a), im(b) {}
};

int main()
{
	complex<int> c1(1, 2); // ok
	complex<int> c2 = c1;  // ok. 복사 생성자
	complex<double> c3 = c1; // error. c1, c3 는 다른 타입이다.!
}