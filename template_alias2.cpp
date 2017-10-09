/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : template_alias2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/


// template alias
template<typename T> class List {};

// typedef : type 별칭을 만들지만... template 의 별칭을 만들수 없다.
typedef List<int> IntList; // ok..

//template<typename T> typedef List<T> MyList<T>;  // error. 

template<typename T> using MyList = List<T>;

int main()
{
	//List<int> s;
	//IntList s; 

	MyList<int> s; // List<int> 
}