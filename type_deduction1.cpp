/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : type_deduction1.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <typeinfo>
#include <boost/type_index.hpp>
using namespace std;
using namespace boost::typeindex;

// 규칙 1. 템플릿 인자를 값 타입으로 받을때
//		   인자의 const, volatile, reference 속성은 모두 제거 된다.
template<typename T> void foo(T a)
{
	--a;

	cout << "T : " << type_id_with_cvr<T>().pretty_name() << endl;
	cout << "a : " << type_id_with_cvr<decltype(a)>().pretty_name() << endl;
}

int main()
{
	int		n = 10;
	int&    r = n;
	const int c = n;
	const int& cr = c;

	foo(n); // int			T : int		a : int
	foo(r); // int&			T : int		a : int
	foo(c); // const int	T : int     a : int
	foo(cr);// const int&   T : int		a : int

	// 주의! 인자가 가진 const 속성만 제거
	const int* p1 = &n; // p1을 따라가면 const, p1은 const 아님.
	int* const p2 = &n; // p2가 const

	foo(p1);	// T : const int*,    여기서의 const는 인자의 const가 아님.
	foo(p2);	// T : int*, 즉, const 속성 제거
}
