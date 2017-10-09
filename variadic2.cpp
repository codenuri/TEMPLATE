/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : variadic2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

void goo(int n, double d, const char* s)
{

}
// Parameter Pack
template<typename ... Types> void foo(Types ... args)
{
	// args : Parameter Pack
	cout << sizeof...(args) << endl; // 3
	cout << sizeof...(Types) << endl; // 3

									  //goo(args); // error. 
	goo(args...); // args... : pack 안의 요소들을 , 를 사용해서 나열해 달라.
				  // goo( 1, 3.4, "aaa")
				  // args... : Pack Expansion
}

int main()
{
	foo();
	foo(1);
	foo(1, 3.4, "aaa"); // Types : int, double, const char*  
						// args : 1, 3.4, "aaa"
}
