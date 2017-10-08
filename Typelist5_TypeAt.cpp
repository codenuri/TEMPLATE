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
//-----------------------------------------------------------------------------------------------------
// Typelist의 N 번째 요소의 타입 구하기
// 1. 사용하는 코드를 보고 primary template 작성.
// T : Typelist
template<typename T, int N> struct TypeAt;


// 2. 원하는 타입을 구할수 있도록 부분특수화
//  T : Typelist의 요소 타입
/*
template<typename T, typename U, int N> struct TypeAt<Typelist<T, U>, N>
{
	typedef ? type;
};
*/
// N == 0 일때.
template<typename T, typename U> struct TypeAt<Typelist<T, U>, 0>
{
	typedef T type;
};

// N != 0 일때.
template<typename T, typename U, int N> struct TypeAt<Typelist<T, U>, N>
{
	typedef  typename  TypeAt<U, N-1>::type   type;
};



template<typename T> void test()
{
	typename TypeAt<T, 3>::type n;  // char

	cout << typeid(n).name() << endl;

}


int main()
{
	test<TYPELIST_4(int, char, double, long)>();
}








