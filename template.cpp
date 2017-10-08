/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : template.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

class Test
{
public:
	template<typename T> static void f() {}
	template<typename T> class Complex {};
};

template<typename T> typename T::template Complex<int> foo(T a)  // T 는 Test
{
	Test::f<int>(); // ok

	T::f<int>();    // error. < 를 해석할수 없다.
	T::template f<int>();    // ok

	Test::Complex<int> c1; // ok.. Test의 선언을 조사할수 있다.
	T::Complex<int> c2;    // error.
	T::template Complex<int> c3;    // error.
	typename T::template Complex<int> c4;    // ok

	return c4;
}

int main()
{
	Test t;
	foo(t);
}