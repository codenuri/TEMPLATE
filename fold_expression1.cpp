/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : fold_expression1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

template<typename ... Types> void foo(Types ... args)
{
	int x[] = { args... }; // PATTERN...

	int n = (args + ...); // pack op ...
						  // E1 op ( E2 op ( E3 op ( E4 op E5) ) )
						  // 1 + (2 + (3 + (4 + 5)))

	cout << n << endl;
}
int main()
{
	foo(1, 2, 3, 4, 5);
}