/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : parameter1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// 1. type
// 2. 값( non-type)
// 3. template 

template<typename T, int N> struct Stack
{
	T buff[N];
};

int main()
{
	Stack<int, 10> s;
}
