/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : remove_pointer2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

template<typename T> struct xremove_pointer
{
	typedef T type;
};

/*
template<typename T> struct xremove_pointer<T*> // int** *
{
	typedef T type;
};
*/

template<typename T> struct xremove_pointer<T*> // int** *
{
	typedef typename xremove_pointer<T>::type type;
};

int main()
{
	xremove_pointer<int***>::type n;

	cout << typeid(n).name() << endl;
}

