/*
* HOME       : www.codelec.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : item03_ex02.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T> void foo(T a)
{
	*a = 10;
}

int main()
{
//	if ( false )
//		foo(0);

	// C++17
	if constexpr (false)
		foo(0);
}
