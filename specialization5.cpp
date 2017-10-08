/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : specialization5.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// 하나의 멤버 함수만 특수화 하기

// primary template
template<typename T> class Stack
{
public:
	void pop() {}
	void push(T a);
};

template<typename T> void Stack<T>::push(T a)
{
	cout << "T" << endl;
};

// 특정 멤버함수만 특수화 하는 코드
template<> void Stack<char*>::push(char* a)
{
	cout << "char*" << endl;
};

// 특정 멤버함수만 부분 특수화을 할수는 없다. 
// 부분 특수화는 클래스 전체를 변경해야 한다.
template<> void Stack<T*>::push(char* a)
{
	cout << "char*" << endl;
};

int main()
{
	Stack<int>   s1; s1.push(0);
	Stack<int*>  s1; s2.push(0);
	Stack<char*> s1; s3.push(0);
}