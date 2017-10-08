/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : parameter6.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// default parameter

template<typename T = int, int N = 10> struct Stack
{
};

int main()
{
	Stack<int, 10> s1;

	Stack<int> s2; 

	Stack<> s3; // 모든 인자를 디폴트 값 사용.
}