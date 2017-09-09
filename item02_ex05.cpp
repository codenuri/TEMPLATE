/*
* HOME       : www.codelec.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : item02_ex05.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// Object Generator IDioms : make_xxx() 함수.

template<typename T> class complex
{
	T re, im;
public:
	complex() {}
	complex(T r, T i) {}
};

template<typename T> void foo(T a) 
{
}

// 클래스템플릿의 객체를 만드는 함수 템플릿
template<typename T> 
complex<T> make_complex(const T& a, const T& b)
{
	return complex<T>(a, b);
}

int main()
{
	complex<int> c1(1, 2);
	foo(c1);
	foo(complex<int>(1, 2)); // 클래스 템플릿은 암시적 인스턴스화 안됨..
	foo( make_complex(1, 2)  );

	foo( pair<int, double>(1, 3.4) );
	foo( make_pair(1, 3.4) );
}





