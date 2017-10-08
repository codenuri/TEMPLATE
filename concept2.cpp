/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : concept2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/
#include <iostream>
using namespace std;

struct Point
{
	int x, y;
/*
	bool operator<(const Point&  p)
	{
		return x < p.x;
	}
*/
};

template<typename T> 
concept bool LessThanComparable = requires(T a, T b)
{
	{ a < b } -> bool;
};

template<typename T> requires LessThanComparable<T>
T Min(T x, T y)
{
	return (y < x) ? y : x;
}

int main()
{
	Point p1, p2;
	Min(p1, p2);
}