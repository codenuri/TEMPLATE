/*
* HOME       : www.codelec.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : square.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T>
T square(T a)
{
	T ret = a * a;
	return ret;
}

int main()
{
	square(3);   
	square(3.3); 
}
