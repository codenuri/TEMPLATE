/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : IfThenElse1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// bool 기반의 type selection 기술.
template<bool, typename T, typename U> struct IfThenElse
{
	typedef T type;
};

template<typename T, typename U> struct IfThenElse<false, T, U>
{
	typedef U type;
};

int main()
{
	IfThenElse<true,  int, double>::type n1; // int
	IfThenElse<false, int, double>::type n2; // double
}