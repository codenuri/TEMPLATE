/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : template_alias1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// template alias ( using )

//typedef int DWORD;
//typedef void(*F)();

using DWORD = int;
using F = void(*)();


int main()
{
	DWORD n; // int
	F f; // void(*)()
}
