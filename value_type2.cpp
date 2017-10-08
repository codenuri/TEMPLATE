/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : value_type2.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

template<typename T> class list
{
public:
	// 컨테이너가 저장하는 타입을 외부에 알려 준다.
	typedef T value_type;
	//......
};

list<int> s;
list<int>::value_type n; // n은 결국 int 입니다.