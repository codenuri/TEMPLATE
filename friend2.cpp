/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : friend2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

template<typename T> class Point
{
	T x, y;
public:
	Point()         : x(0), y(0) {}
	Point(T a, T b) : x(a), y(b) {}

	friend ostream& operator <<(ostream& os, const Point<T>& p);
};

template<typename T>
ostream& operator <<(ostream& os, const Point<T>& p)
{
	return os << p.x << ", " << p.y;
}

int main()
{
	Point<int> p(1, 2);
	cout << p << endl;
}

