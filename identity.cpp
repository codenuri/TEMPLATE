/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : ObjectGenerator.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T> struct identity
{
	typedef T type;
};

// implicit, explicit 인스턴스화 모두 가능
// template<typename T> void foo(T a) 

// explicit instantiation 만 가능.
template<typename T> void foo(typename identity<T>::type a)
{
}

int main()
{
	foo(0);		// implicit instantiation - error
	foo<int>(0);// explicit instantiation - ok
}