/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : enable_if.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <type_traits>
using namespace std;

// foo 함수를 정수 계열에 대해서만 코드 생성되게 하고 싶다.
// 방법 1. static_assert 
// 특징 : T가 정수가 아니면 무조건 error 발생.
template<typename T> void foo(T a)
{
	static_assert(is_integral<T>::value, "error");
}

// 방법 2. enable_if
// 특징 : T가 정수가 아니면 error가 아니라 코드 생성을 하지 않음. 호출 가능한 다른 foo()가 있으면 사용됨
// enable_if 위치 1. 함수 리턴 타입에 적용
template<typename T> typename enable_if< is_integral<T>::value,void >::type foo(T a)
{
}

// enable_if 위치 2. 함수 인자 타입에 적용 - 생성자.. 
template<typename T>   
void foo(T a, typename enable_if< is_integral<T>::value, void >::type* p = nullptr )
{
}

// enable_if 위치 3. 템플릿 인자에 적용
// template<typename T, void* = nullptr >
template<typename T, typename enable_if< is_integral<T>::value, void >::type* = nullptr >
void foo(T a)
{
}

void foo(...) {}

int main()
{
	foo(3);
}

























