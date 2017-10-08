#include <iostream>
using namespace std;

template<typename T, typename U> struct Typelist
{
	typedef T Head;
	typedef U Tail;
};
struct NullType {};

#define TYPELIST_1(T1)				Typelist<T1, NullType>
#define TYPELIST_2(T1, T2)			Typelist<T1, Typelist<T2, NullType>>
#define TYPELIST_3(T1, T2, T3)		Typelist<T1, Typelist<T2, Typelist<T3, NullType>>>
#define TYPELIST_4(T1, T2, T3, T4)	Typelist<T1, Typelist<T2, Typelist<T3, Typelist<T4, NullType>>>>

//-------------------------------------------------------------------------------------------
// Typelist 활용 

// Holder : 임의 타입의 data 하나 보관..
template<typename T> struct Holder
{
	T value;
};

// MakeCode
template<typename T, template<typename> class Unit>
class MakeCode : public Unit<T>
{
};

template<template<typename> class Unit>
class MakeCode<NullType, Unit>
{
};

// MakeCode의 1번째 인자가 Typelist일때..
template<typename Head,					 //						   Holder<double>,        empty
	     typename Tail,					 //  Holder<int>           MakeCode<double,Unit>, MakeCode<NullType, Unit>
         template<typename> class Unit>  //  MakeCode<int, Unit>,  MakeCode<Typelist<double, Nullype>, Unit>
class MakeCode<Typelist<Head, Tail>, Unit> : public MakeCode<Head, Unit>, public MakeCode<Tail, Unit>
{
	// int value;
	// double value;
};


int main()
{
	MakeCode<TYPELIST_3(int, double, short), Holder> m;
	// MakeCode의 1번째 인자가 Typelist일때..
	//	     Typelist<int, Typelist<double, NullType>>
	MakeCode<TYPELIST_2(int, double), Holder> m; 


	MakeCode<int, Holder>      mc1; // Holder<int> 
	MakeCode<double, Holder>   mc2; // Holder<doulbe>
	MakeCode<NullType, Holder> mc3; // empty
}


