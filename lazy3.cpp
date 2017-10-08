/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : lazy3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// if 문은 실행시간 조건 분기 문이다.
// 함수 오버로딩은 컴파일 시간 분기문이다
// if constexpr 문은 컴파일시간 조건 분기 문이다.

template<typename T> void foo(T a, int n)
{
	*a = 10;
}

template<typename T> void foo(T a, double d)
{
}

int main()
{
	foo(0, 3.4); // 함수 오버로딩의 의한 함수 선택은 컴파일 시간에 결정. foo(T, int)는 사용된적이 없으므로 C++ 코드로 생성안됨.

	// 아래 처럼 사용한 경우. foo( T, int) 는 사용된다고 판단하므로 error.
	if (false)
		foo(0, 1);
	else
		foo(0, 3.4);

	// 하지만 아래 처럼 하면 error. 없음.
	if constexpr(false)
		foo(0, 1);
	else
		foo(0, 3.4);
}

