/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : parameter7.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

// template 파라미터의 종류

// 1. type 
// 2. 값(non-type) : 정수형 상수, enum 상수, 포인터, 함수 포인터, C++17 auto
// 3. template 

// "default 값 사용가능."

// C++11 : 가변인자 템플릿
template<typename ... T> class Test {};
template<int ... N> class Test {};
