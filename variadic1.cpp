/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : variadic1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// 가변인자 클래스 템플릿.
template<typename ... Types> class tuple
{
};

// 가변인자 함수 템플릿
template<typename ... Types> void foo(Types ... args)
{
}

int main()
{
	tuple<int>      t1;   // Types : int
	tuple<int, int> t2;   // Types : int, int
	tuple<int, int, char> t3;

	tuple<> t4;

	foo(1);
	foo(1, 3.4); // Types : int, double   args : 1, 3.4  => parameter pack
	foo();
}

