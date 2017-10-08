/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : crtp3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

template<typename T> struct Count
{
private:
	static int cnt;
public:
	Count() { ++cnt; }
	~Count() { --cnt; }

	static int count() { return cnt; }
};
template<typename T> int Count<T>::cnt = 0;

class Mouse : public Count<Mouse>
{
};
class Keyboard : public Count<Keyboard>
{
};
int main()
{
	Mouse m1, m2;
	Keyboard k1, k2;

	cout << k1.count() << endl;
}