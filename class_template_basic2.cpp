/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : class_template_basic2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/


#include <iostream>
using namespace std;

// 멤버 함수의 외부 구현
template<typename T> class stack
{
	T* buff;
public:
	void push(const T& a);

	static int count;

	template<typename U> T foo(U a);
};

// 클래스 템플릿의 멤버 함수 템플릿의 외부 구현하는 모양 - 복잡해 보이지만 중요합니다.
template<typename T> template<typename U> 
T stack<T>::foo(U a)
{
}

// static 멤버 변수의 외부 선언
template<typename T> int stack<T>::count = 0;

// 멤버 함수의 외부 구현
template<typename T> 
void stack<T>::push(const T& a)
{
}


int main()
{
}