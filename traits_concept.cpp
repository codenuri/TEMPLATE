/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : traits_concept.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

template<typename T> void printv(T a)
{
	if (T is Pointer)
		cout << a << " : " << *a << endl;
	else
		cout << a << endl;
}


int main()
{
	int n = 3;

	printv(n);
	printv(&n);
}




