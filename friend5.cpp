/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : friend5.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/


#include <iostream>
using namespace std;
// 해결책 1.
// 클래스와 friend 함수
// 1 : 1, 
// 1 : N, 
// N : 1, 
// N : N   =>
template<typename T> class Point
{
	T x, y;
public:
	Point() : x(0), y(0) {}
	Point(T a, T b) : x(a), y(b) {}
	
	// 함수 템플릿이 아님..
	//friend ostream& operator <<(ostream& os, const Point<T>& p);

	// 함수 템플릿.
	template<typename U>
	friend ostream& operator <<(ostream& os, const Point<U>& p);
};

// 함수 템플릿
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

