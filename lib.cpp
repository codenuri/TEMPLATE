/*
* HOME       : www.codelec.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : lib.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/


void foo(int a)
{
}

template<typename T>
T square(T a)
{
	T ret = a * a;
	return ret;
}
