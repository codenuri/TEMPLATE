/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : friend6.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// 1 : 1 의 관계..
template<typename T> class Point
{
	T x, y;
public:
	Point() : x(0), y(0) {}
	Point(T a, T b) : x(a), y(b) {}

	// friend 함수 구현을 클래스 내부에..
	friend ostream& operator <<(ostream& os, const Point<T>& p)
	{
		return os << p.x << ", " << p.y;
	}
};

int main()
{
	Point<int> p(1, 2);
	cout << p << endl;
}

