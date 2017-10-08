/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : int2type2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<int N> struct int2type
{
	enum { value = N };
};

void foo(int n) {}

// 0, 1 에 따른 함수 오버로딩.
void foo(int2type<0>) {}
void foo(int2type<1>) {}

int main()
{
	foo(0);	
	foo(1);	// 0, 1은 같은 타입.. foo(0), foo(1)은 같은 함수 호출
	
	int2type<0> t0;
	int2type<1> t1;

	foo(t0);
	foo(t1); // t0, t1 은 다른 타입이므로 foo(t0), foo(t1)은 다른 함수 호출.
}