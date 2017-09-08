/*
* HOME       : www.codelec.co.kr
* COURSENAME : C++ Template Programming
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// item03_ex2.cpp

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
