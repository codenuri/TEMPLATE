/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : crtp2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

template<typename T> class Singleton
{
public:
	static T* instance;

	static T& getInstance()
	{
		if (instance == 0)
			instance = new T;
		return *instance;
	}
};

template<typename T> T* Singleton<T>::instance = 0;

class Cursor : public Singleton<Cursor>
{
};

int main()
{
	Cursor& c = Cursor::getInstance();
}