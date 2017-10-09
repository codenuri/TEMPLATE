/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : GetValueFromPack1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// parameter pack 에서 요소 꺼내기

// 1. pack expansion 사용
template<typename ... Types> void foo(Types ... args)
{
	// args : 1,2,3 
	//int x[] = { 0,  args... };
	/*
	initializer_list<int> x = { args... };

	for (auto n : x)
	cout << n << endl;
	*/

	tuple<Types...> t(args...);
	//for ( int i = 0 ; i < sizeof...(args); ++i )
	cout << get<0>(t) << endl; // 1
	cout << get<1>(t) << endl; // 2
	cout << get<2>(t) << endl; // 3.4
}

int main()
{
	foo(1, 2, 3.4);
	//foo();
}











