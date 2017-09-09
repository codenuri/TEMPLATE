/*
* HOME       : www.codelec.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// item1_template_basic_ex01.cpp

int square(int a)
{
	int ret = a * a;
	return ret;
}

double square(double a)
{
	double ret = a * a;
	return ret;
}

int main()
{
	square(3);
	square(3.3);
}








