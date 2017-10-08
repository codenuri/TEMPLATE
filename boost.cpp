/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : boost.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <typeinfo>
#include <boost/type_index.hpp>
using namespace std;
using namespace boost::typeindex;

template<typename T> void foo(const T a)
{
//	cout << "T : " << typeid(T).name() << endl;
//	cout << "T : " << typeid(a).name() << endl;

	cout << "T : " << type_id_with_cvr<T>().pretty_name() << endl;
	cout << "a : " << type_id_with_cvr<decltype(a)>().pretty_name() << endl;
}

int main()
{
	foo(3);		// T : int		a : const int
	foo(3.3);
}