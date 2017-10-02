/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : enable_if2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <type_traits>
using namespace std;

// 포인터 일때와 포인터가 아닐때
/*
template<typename T> void printv(T a)
{
	// 방법 1. if 문 사용..
	if (is_pointer<T>::value)
	{
		//....
	}
	else
	{
		//....
		// *a = 0; error... 
	}
}
*/

// 방법 2. true_type, false_type 으로 오버로딩..
/*
template<typename T> void printv_imp(T a, true_type)  {}
template<typename T> void printv_imp(T a, false_type) {}

template<typename T> void printv(T a)
{
	printv_imp(a, is_pointer<T>());
}
*/
// 방법 3. enable_if 사용.
template<typename T> typename enable_if< is_pointer<T>::value, void>::type  printv(T a)
{
	cout << "포인터 일때" << endl;
}

template<typename T> typename enable_if< !is_pointer<T>::value, void>::type printv(T a)
{
	cout << "포인터 아닐때" << endl;
}


int main()
{
	int n = 10;
	printv(n);
	printv(&n);
}







