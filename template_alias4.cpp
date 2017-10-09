/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : template_alias4.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <set>
#include <functional>
using namespace std;

template<typename T> using SET = set<T, greater<T>>;

int main()
{
	SET<int> s1;

//	set<int,    greater<int> > s1;
	set<double, greater<double> > s2;

	s1.insert(10); // <, less ÇÔ¼ö°´Ã¼
	s1.insert(20); 
	s1.insert(15);

	for (auto n : s1)
		cout << n << endl;
	
}
