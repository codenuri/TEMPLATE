/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : member_detect_has_value_type.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

struct NoValueType
{
};

struct HasValueType
{
	typedef int value_type;
};

template<typename T> struct has_value_type
{
	using YES = char;
	using NO = short;

	template<typename U> static YES check(typename U::value_type*  a);
	template<typename U> static NO  check(...);

	static constexpr bool value = (sizeof(check<T>(0)) == sizeof(YES));
};

int main()
{
	cout << has_value_type<HasValueType>::value << endl; // 1
	cout << has_value_type<NoValueType>::value << endl;  // 0
}













