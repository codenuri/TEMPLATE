/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Template Programming
* MODULE     : xget3.cpp
* Copyright (C) 2017 CODENURI Inc. All rights reserved.
*/


#include <iostream>
using namespace std;

// xtuple 
template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;
};

template<typename T, typename ... Types>
struct xtuple<T, Types...> : public xtuple<Types...>
{
	T value;
	xtuple() = default;
	xtuple(const T& v, const Types& ... args) : value(v), xtuple<Types...>(args...) {}
	static constexpr int N = xtuple<Types...>::N + 1;
};

// xtuple_element_type
template<int N, typename T> struct xtuple_element_type;

template<typename T, typename ... Types>
struct xtuple_element_type<0, xtuple<T, Types...>>
{
	typedef T type;
	typedef xtuple<T, Types...> tupleType;
};

template<int N, typename T, typename ... Types>
struct xtuple_element_type<N, xtuple<T, Types...>>
{
	typedef typename xtuple_element_type<N - 1, xtuple<Types...>>::type      type;
	typedef typename xtuple_element_type<N - 1, xtuple<Types...>>::tupleType tupleType;
};

// get
template<int N, typename T> typename xtuple_element_type<N, T>::type& xget(T& tp)
{
	return static_cast<typename xtuple_element_type<N, T>::tupleType&>(tp).value;
}

int main()
{
	xtuple<int, double, char> t3(1, 3.4, 'A');

	xget<0>(t3) = 10;

	cout << xget<0>(t3) << endl; // 10
	cout << xget<1>(t3) << endl; // 3.4
	cout << xget<2>(t3) << endl; // 'A'
}
