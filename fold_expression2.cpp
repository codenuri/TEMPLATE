/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : fold_expression2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

template<typename ... Types> void foo(Types ... args)
{
	int n1 = (args + ...);  // (1 + (2 + (3 + (4 + 5))))
	int n2 = (... + args);  // ((((1 + 2) + 3) + 4) + 5)

	int n3 = (args + ... + 10);  // (1 + (2 + (3 + (4 + (5 + 10)))))
	int n4 = (10 + ... + args);  // (((( 10 + 1) + 2) + 3) + 4) + 5)

	cout << n1 << endl;
	cout << n2 << endl;
	cout << n3 << endl;
	cout << n4 << endl;
}
int main()
{
	foo(1, 2, 3, 4, 5);
}