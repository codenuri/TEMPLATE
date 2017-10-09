/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : PackExpansion2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <tuple>
using namespace std;

// Type Expansion
template<typename ... Types> void foo()
{
	// Types : int, char
	pair<Types...>  p1; // pair<int, char>   ok
	tuple<Types...> t1; // tuple<int, char>  ok

	tuple<pair<Types...>> t2; // tuple<pair<int, char>>

							  //pair<tuple<Types...>> p2; // pair< tuple<int, char> >  error
	pair<tuple<Types>...> p3; // pair< tuple<int>, tuple<char>> ok

							  //tuple<pair<Types>...> t3; // tuple< pair<int>, pair<char>> error

	tuple<pair<int, Types>...> t4; // tuple< pair<int, int>, pair<int, char>> ok..
}

int main()
{
	foo<int, char>();
}
