/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : basic_ex02.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/


#define MAKE_SQUARE(T)	\
T square(T a)			\
{						\
	T ret = a * a;		\
	return ret;			\
}

MAKE_SQUARE(int)
MAKE_SQUARE(double)

int main()
{
	square(3);
	square(3.3);
}