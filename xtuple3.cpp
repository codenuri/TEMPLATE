/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : xtuple3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// Step 3. N개를 보관하는 tuple
template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;
};

template<typename T, typename ... Types> struct xtuple<T, Types...> : public xtuple<Types...>
{
	T value;
	xtuple() = default;
	xtuple(const T& a, const Types& ... args) : value(a), xtuple<Types...>(args...) {}
	
	static constexpr int N = xtuple<Types...>::N + 1;
};


int main()
{
	xtuple<>		          t0;
	xtuple<int, char, double> t3(3, 'A', 3.4);
}