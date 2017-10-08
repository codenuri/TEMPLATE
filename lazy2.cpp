/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : lazy2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T> void foo(T a)
{
	*a = 10;
}

int main()
{
	//foo(0); // error

	if (false)	// if문은 실행시간 조건문이므로
		foo(0);	// 컴파일시에 이 코드는 사용된다고 판단.

	if constexpr(false) // C++17 static-if 문법
		foo(0);

}