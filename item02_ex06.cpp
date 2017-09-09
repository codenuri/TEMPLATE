/*
* HOME       : www.codelec.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : item02_ex06.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T> struct identity
{
	typedef T type;
};

template<typename T> void foo(T a) {}
template<typename T> void goo(typename identity<T>::type a) {}

int main()
{
	foo(3);			// ok
	foo<int>(3);	// ok

	goo(3);			// error
	goo<int>(3);	// ok
}