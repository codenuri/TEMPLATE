/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : Vector.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <list>
using namespace std;

// C++17. class template type deduction
template<typename T> class Vector
{
	T* buff;
	int sz;
public:
	Vector() {}
	Vector(int s, T v) {}
	template<typename C> Vector(const C& c) {};
};
// class template type deduction guide
Vector()->Vector<int>;
template<typename C> Vector(const C& c)->Vector< ? >;

int main()
{
	Vector<int> v1(10, 3);
	Vector      v2(10, 3); // C++14까지 error. C++17 부터 가능.
						   // g++ -std=c++1z
	Vector      v3;

	list<int> s = { 1,2,3 };
//	Vetor      v4(s);	// deductioni guide 필요
}