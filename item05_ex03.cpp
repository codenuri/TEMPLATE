/*
* HOME       : www.codelec.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : item05_ex03.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

template<typename T> 
void foo(T a) 
{
	cout << "T" << endl;
}

void foo(int a); // { cout << "int" << endl; }

int main()
{
	foo(3); // link error.
}
