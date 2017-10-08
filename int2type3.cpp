/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : int2type3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <type_traits>
using namespace std;

template<typename T> struct IsPointer     {	static constexpr bool value = false; };
template<typename T> struct IsPointer<T*> {	static constexpr bool value = true;  };

template<typename T> void printv(T a)
{
	if (IsPointer<T>::value )
		cout << a << " : " << *a << endl;
	else
		cout << a << endl;

	// C++17 을 사용했다면 해결됨.

	/*
	if constexpr (IsPointer<T>::value)
		cout << a << " : " << *a << endl;
	else
		cout << a << endl;
	*/

}

int main()
{
	int n = 3;

	printv(n);   // error
	printv(&n);  // ok.
}
