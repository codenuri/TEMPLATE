/*
* HOME       : www.codelec.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : item02_ex01.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// template 인스턴스화(instantiation)

template<typename T> 
T square(T a)
{
	T ret = a * a;
	return ret;
}

int main()
{
	square<int>(3);		// explicit instantiation
	square<double>(3.4);

	square(3);			// implicit instantiation
	square(3.4);
}








