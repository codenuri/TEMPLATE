/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : instantiation1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T> T square(T a)
{
	T ret = a * a;
	return ret;
}

int main()
{
	// explicit instantiation
	square<int>(3);
	square<double>(3.4);

	// implicit instantiation
	square(3);
	square(3.4);
}