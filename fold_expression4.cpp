/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : fold_expression4.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

template<typename ... Types> void foo(Types ... args)
{
	int n1 = (args + ...); // (1 + (2 + 3) )

	(v.push_back(args), ...); // ( v.push_back(1), (v.push_back(2), v.push_back(3)))

	for (auto n : v)
		cout << n << endl;
}

int main()
{
	foo(1, 2, 3);
}