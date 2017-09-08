/*
* HOME       : www.codelec.co.kr
* COURSENAME : C++ Template Programming
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// cl square.cpp /FAs
// g++ square.cpp -S

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
