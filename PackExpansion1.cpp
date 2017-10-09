/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : PackExpansion1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

void goo(int a, int b, int c)
{
	cout << a << ", " << b << ", " << c << endl;
}

int hoo(int a) { return -a; }

// Pack Expansion : (pack을 사용하는 패턴)...
template<typename ... Types> void foo(Types ... args) // args : 1,2,3 
{
	//int ar[] = { args... }; // 1, 2, 3

	//int ar[] = { (++args)... }; // ++E1, ++E2, ++E3, ++1, ++2, ++3
	//int ar[] = { hoo(args...) }; // hoo(1,2,3) error

	int ar[] = { hoo(args)... }; // { hoo(1), hoo(2), hoo(3) }

	goo(args...); // goo( 1, 2, 3)
	goo(hoo(args)...); // goo( hoo(1), hoo(2), hoo(3))
	goo(hoo(args...)); // goo( hoo( 1,2,3)) // error



	for (int n : ar)
		cout << n << endl;
}

int main()
{
	foo(1, 2, 3);
}











