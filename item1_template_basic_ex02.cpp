/*
* HOME       : www.codelec.co.kr
* COURSENAME : C++ Template Programming
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// item1_template_basic_ex02.cpp

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