/*
* HOME       : www.codelec.co.kr
* COURSENAME : C++ Template Programming
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// item1_template_basic_ex04.cpp

template<typename T>
T square(T a)
{
	T ret = a * a;
	return ret;
}

int main()
{
	// 한글주석을 테스트합니다.
	square(3);

	short s = 3;
	//square(s);
	square<int>(s);
}