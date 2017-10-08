/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : fold_expression3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

template<typename ... Types> void foo(Types ... args)
{
	// I : initial value
	// I + ... + args;  // (((I + E1) + E2) + E3)

	(cout << ... << args); // ((( cout << 1) << 2) << 3)
}
int main()
{
	foo(1, 2, 3);

	//	(((cout << 1) << 2) << 3) << endl; // 123

}