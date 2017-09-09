/*
* HOME       : www.codelec.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : item02_ex02.cpp
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
	int n = 3;
	short s = 3;

//	square(n);
//	square(s); // "Code Bloat" => Code 메모리가 커지는 현상

	square<int>(n);
	square<int>(s);

}








