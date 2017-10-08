/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : square.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// cl square.cpp /FAs					=> square.asm
// g++ square.cpp  -S					=> square.s
// g++ -fdump-tree-original square.cpp	=>square.cpp.003t.original
 
  
template<typename T>
T square(T a)
{
	T ret = a * a;
	return ret;
}

int main()
{
	square(3);
	square(3.3);
}