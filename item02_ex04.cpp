/*
* HOME       : www.codelec.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : item02_ex04.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T> class complex
{
	T re, im;
public:
	complex() {}
	complex(T r, T i) {}
};

int main()
{
	complex<int> c1(1, 2); // ok.
	complex      c2(1, 2); // C++14까지는 허용 안됨.. error. C++17 부터는 ok
	complex      c3;       // C++17 에서도 error.
}

