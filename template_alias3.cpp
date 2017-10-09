/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : template_alias3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/
// using È°¿ë

template<typename T, typename U> class Test {};

//template<typename T, typename U> using MyTest = Test<T, U>; 


template<typename T> using MyTest = Test<T, double>;


int main()
{
	MyTest<int> t; // Test<int, double>
}
