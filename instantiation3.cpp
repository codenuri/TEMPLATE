/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : instantiation3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T> 
void foo(T a)
{
	a = a + 1;
}

int main()
{
	int  n = 10;
	int& r = n;

	foo(n); // T: int
	foo(r); // T : int ? int&    => int ∑Œ ∞·¡§µ 

	foo<int&>; // T : int&
}