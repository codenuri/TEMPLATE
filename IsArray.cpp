/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : IsArray.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;
//			변수이름    타입

// int a;		a		int
// int* p;		p		int*
// int x[10];	x		int[10]	=> T[N]

// int[] : 크기를 알수 없는 배열 타입

template<typename T> struct IsArray
{
	static const int size = -1;
	static const bool value = false;
};

template<typename T, int N> struct IsArray<T[N]>
{
	static const int size = N;
	static const bool value = true;
};

template<typename T> void foo(const T& a) // int[10]
{
	if (IsArray<T>::value)   // 위 코드를 수정해서 IsArray<>만들어 보세요.. 1차 배열만 고려해 보세요
		cout << "배열 입니다. 크기는 " << IsArray<T>::size << endl;
	else
		cout << "배열이 아닙니다." << endl;
}

int main()
{
	int x[10] = { 1,2,3 };
	foo(x);
}


