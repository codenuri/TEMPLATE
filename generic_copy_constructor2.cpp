/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : generic_copy_constructor2.cpp
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
	
	// 복사 생성자 모양 1.
	//complex(const complex<T>&);		// complex<double> c3 = c1; 일때 c1은 반드시 complex<double> 이어야 한다.

	// 복사 생성자 모양 2.
	//complex(const complex<int>&);		// complex<double> c3 = c1; 일때 c1은 반드시 complex<int> 이어야 한다.


	// 복사 생성자 모양 3. 일반화된 복사 생성자
	// "U가 T로 복사 가능하다면 complex<U> 는 complex<T> 로 복사 가능해야 한다."
	template<typename U> complex(const complex<U>&);		// complex<double> c3 = c1; 일때 c1은 complex<U> 이므로, 임의의 타입의 complex 이다.

	template<typename> friend class complex;
};

template<typename T> template<typename U>
complex<T>::complex(const complex<U>& c) : re(c.re), im(c.im)
{
}

int main()
{
	complex<int> c1(1, 2); // ok
	complex<int> c2 = c1;  // ok. 복사 생성자
	complex<double> c3 = c1; // error. c1, c3 는 다른 타입이다.!
}