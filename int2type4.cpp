/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : int2type4.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <type_traits>
using namespace std;

template<typename T> struct IsPointer { static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> { static constexpr bool value = true; };

// 지연된 인스턴스화 : 사용되지 않은 함수 템플릿은 실제 C++ 코드를 생성하지 않는다는 개념..
//					 실제 코드가 생성되지않으므로 컴파일도 안됨..

template<typename T> void printv_not_pointer(T a)// 포인터가 아닐때만 사용할 버전
{
	cout << a << endl;
}

template<typename T> void printv_pointer(T a)// 포인터 일때만 사용할 버전
{
	cout << a << " : " << *a << endl;
}

template<typename T> void printv(T a)
{
	// 의도 : false 가 나오면 실행되지 않으므로 , 코드 생성하지 않을것이다...
	//       하지만.. 
	if (IsPointer<T>::value)
		printv_pointer(a);
	else
		printv_not_pointer(a);

	// 하지만, if()문은 컴파일 시간에 false 로 결정되었지만.. if()문은 결국 실행시간 메커니즘 이므로
	// 컴파일러는 컴파일 할때는 위 2개의 함수가 모두 필요하다고 판단하고
	// 2개의 템플릿을 모두 실제 함수로 만들게 됩니다. 
}

int main()
{
	int n = 3;

	printv(n);
}




