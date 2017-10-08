/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : xget2.cpp
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
	//xtuple<			  >        // primary template
	//xtuple<			  double>  // 3.4을 보관
	//xtuple<		char, double>  // 'A'을 보관
	xtuple<int, char, double> t3(3, 'A', 3.4); // 3을 보관

	cout << t3.value << endl;

	cout << static_cast<xtuple<char, double>&>(t3).value << endl; // 'A'
	cout << static_cast<xtuple<double>&>(t3).value << endl;       // 3.4

//	double d = xget<2>(t3);
}
/*
template<int N, typename T> // T는 튜플
튜플 T의 N번째 요소의 타입&
xget(T& tp)
{
	return static_cast<tp의 N번쨰 기본 타입&>(tp).value;
}
*/













