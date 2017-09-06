/*
* HOME       : www.codelec.co.kr
* COURSENAME : C++ Template Programming
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// item1_template_basic_ex03.cpp

template<typename T>
T square(T a)		
{					
	T ret = a * a;	
	return ret;		
}

int main()
{
	// 타입을 명시적으로 전달한 경우
	square<int>(3);
	square<double>(3.3);

	// 타입을 전달하지 않은 경우 - 컴파일러가 함수 인자를 통해서 결정
	square(3);
	square(3.3);
}