#include <iostream>
using namespace std;

// Step2. NullType 과 매크로 도입

// Typelist : 타입을 여러개 보관하는 type의 list(값이 아님.)

template<typename T, typename U> struct Typelist
{
	typedef T Head;
	typedef U Tail;
};

struct NullType {}; 

// 매크로 도입
#define TYPELIST_1(T1)       Typelist<T1, NullType>
#define TYPELIST_2(T1, T2)   Typelist<T1, Typelist<T2, NullType>>
#define TYPELIST_3(T1, T2, T3)   Typelist<T1, Typelist<T2, Typelist<T3, NullType>>>
#define TYPELIST_4(T1, T2, T3, T4)   Typelist<T1, Typelist<T2, Typelist<T3, Typelist<T4, NullType>>>>


int main()
{
	Typelist<int, NullType> t1;
	Typelist<int, Typelist<double, NullType>> t2;
	//Typelist<int, Typelist<double, Typelist<char, NullType>>> t3;

	TYPELIST_1(int) t4; // 
	TYPELIST_4(int, double, char, short) t4; // 
}












