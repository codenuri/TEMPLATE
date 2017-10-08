/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : integral_constant.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

/*
// C++11에는 int2type을 발전시킨 아래 템플릿을 제공합니다

template<typename T, T N> struct integral_constant
{
	static constexpr T value = N;
};
//integral_constant<int,   0> n0;
//integral_constant<short, 0> s0;

// true/false           : 참거짓을 나타내는 값, 같은 타입
// true_type/false_type : 참거짓을 나타내는 타입, 다른 타입.
typedef integral_constant<bool, true>  true_type;
typedef integral_constant<bool, false> false_type;


// 그리고 is_pointer는 아래 처럼 만들게 됩니다.
template<typename T> struct is_pointer     : false_type { };
template<typename T> struct is_pointer<T*> : true_type {};
*/

#include <type_traits>  // 이 안에 위코드가 있습니다.
//------------------------------

template<typename T> void printv_imp(T a, false_type)
{
	cout << a << endl;
}

template<typename T> void printv_imp(T a, true_type)
{
	cout << a << " : " << *a << endl;
}

template<typename T> void printv(T a)
{
	printv_imp(a, is_pointer<T>()); // is_pointer 임시객체 생성.
}

int main()
{
	int n = 3;

	printv(n);
	printv(&n);
}








