/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : instantiation4.cpp
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
	complex<int> c1(1,2); // ok
	complex      c2(1, 2); // C++14까지는 에러, C++17 부터 가능

	complex      c3; //  C++17에서 도 에러, 컴파일 되게 하려면 class template type deduction guide 필요
}
