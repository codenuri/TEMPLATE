/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : complex.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

/*
class complex
{
	int re;
	int im;
public:
	complex(int r, int i) : re(r), im(i) {}
};
*/

template<typename T> class complex
{
	T re;
	T im;
public:
	complex(T r, T i) : re(r), im(i) {}
};

int main()
{
	complex<int> c1(3, 5);
}