/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : typename.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

class A
{
public:
	//......
	// static int DWORD;
	 typedef int DWORD;
};
int p = 0;

template<typename T> void foo(T a)  // T 는 A
{
	// 아래 한줄을 해석해 보세요
	T::DWORD * p; // 1. DWORD는 T안에 있는 static 멤버 변수이다. 그런데, 곱하기 p를 하고 있다
				  // 2. DWORD는 T안에 있는 내포 타입이다. 포인터 변수 p를 선언하고 있다.

	// T안에 내포된 타입을 사용하려면 typename이 필요하다.
	typename T::DWORD * p1;
}

int main()
{
	A a;
	foo(a);
}