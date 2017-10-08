/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : class_template_basic1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// stack    : template 
// stack<T> : type
template<typename T> class stack
{
	T* buff;
public:

	void goo(stack s) {} // ok..   멤버 함수안에서 stack 은 stack<T> 와 동일.
};

void foo(stack s) {} // error

int main()
{
	stack      s1; // error. stack 은 type 이 아니고, template 이다.
	stack<int> s2; // ok.    stack<int> 는 타입..
}