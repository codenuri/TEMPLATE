/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : template_vs_function.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

template<typename T>
T square(T a)
{
	T ret = a * a;
	return a;
}
void foo()
{
}

int main()
{
	printf("%p\n", &foo);
	//printf("%p\n", &square); // ?
	//printf("%p\n", &square<int>); // ?
	printf("%p\n", static_cast<int(*)(int)>(&square)); // ?
}