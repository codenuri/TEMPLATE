/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : specialization4.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// partial specialization 과 default parameter
template<typename T, int N = 10> class Stack
{
	T buf[N];
};

// 부분 특수화 - 디폴값은 표기 하지 않는다. 표기하지 않아도 primary 값이 적용된다.
template<typename T, int N> class Stack<T*, N>
{
	T buf[N];
};

int main()
{
	Stack<int> s1;  // N == 10
	Stack<int*> s2; // N == 10
}