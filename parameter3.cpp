/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : parameter3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// non-type(값) parameter

// 1. 정수형 상수(실수 안됨.)
template<int N> class Test1 {};

// 2. enum 상수
enum Color { red = 1, green = 2};
template<Color> class Test2 {};

// 3. 포인터 : 지역변수 주소안됨.. 전역변수주소는 가능.. 
//			   no linkage 를 가지는 변수 주소는 안됨..
template<int*> class Test3 {};

int x = 0;

// 4. 함수 포인터..
template<int(*)(void)> class Test4 {};

int main()
{
	int n = 10;

	Test1<10> t1; // ok
	//Test1<n>  t2; // error. 변수 안됨.
	Test2<red> t3; // ok

	//Test3<&n> t4; // error;
	Test3<&x> t5; // ok

	Test4<&main> t6;// ok
}