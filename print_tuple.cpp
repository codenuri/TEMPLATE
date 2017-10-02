/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : print_tuple.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/

#include <iostream>
#include <tuple>
using namespace std;

// template<size_t ... N> struct index_sequence {};

template<typename TP, size_t ... I > 
void print_tuple_imp(const TP& tp, const index_sequence<I...>& ) // I : 0, 1, 2
{
	int x[] = { get<I>(tp)... }; // get<0>(tp), get<1>(tp), get<2>(tp)

	for (auto& n : x)
		cout << n << ", ";
}

template<typename TP> void print_tuple(const TP& tp)
{
	print_tuple_imp(tp, make_index_sequence<tuple_size<TP>::value>());
}

int main()
{
	tuple<int, int, int> tp(1, 2, 3);

	print_tuple(tp);
}
