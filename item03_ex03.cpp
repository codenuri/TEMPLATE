/*
* HOME       : www.codelec.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : item03_ex03.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// if 문은 실행시간 조건분기 문입니다.
// 함수 오버로딩은 컴파일시간 분기문 입니다
// if constexpr 문은 컴파일 시간 조건 분기문 입이다.

// 함수 오버로딩 
template<typename T> void foo(T a, int n)
{
	*a = 10; 
}
template<typename T> void foo(T a, double d)
{
}
int main()
{
	//foo(0, 3.4);

	if constexpr (false)
		foo(0, 1);
	else
		foo(0, 3.4);
}













