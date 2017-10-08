/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : specialization1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// template specialization
// primary template
template<typename T> class Stack
{
public:
	void push(T v) { cout << "T" << endl; }
};

// partial specialization( 부분 특수화, 부분 전문화)
template<typename T> class Stack<T*>
{
public:
	void push(T* v) { cout << "T*" << endl; }
};

// specialization
template<> class Stack<char*>
{
public:
	void push(char* v) { cout << "char*" << endl; }
};

int main()
{
	Stack<int>   s1; s1.push(0);
	Stack<int*>  s2; s2.push(0);
	Stack<char*> s3; s3.push(0);
}
