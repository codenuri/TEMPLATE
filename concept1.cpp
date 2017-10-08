/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : concept1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

struct Point
{
	int x, y;
};

// T는 < 연산이 가능해야 한다.
// 문제점 : 에러 메세지가 복잡하게 출력된다.
template<typename T> T Min(T x, T y)
{
	return (y < x) ? y : x;
}

int main()
{
	Point p1, p2;
	Min(p1, p2);
}