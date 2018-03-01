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
// Typelist 끝에 타입 추가하기.

template<typename TL, typename T> struct Append;


//     TL         T
// 1. NullType, NullType   => NullType
template<> struct Append<NullType, NullType>
{
	typedef NullType type;
};

// 2. NullType, 임의의타입   => Typelist<임의의타입, NullType>
template<typename T> struct Append<NullType, T>
{
	typedef Typelist<T, NullType> type;
};

// 3. NullType, Typelist<Head, Tail>  => Typelist<Head, Tail>
template<typename Head, typename Tail> struct Append<NullType, Typelist<Head, Tail> >
{
	typedef Typelist<Head, Tail> type;
};


// 4. Typelist<Head, Tail>, NullType  => Typelist<Head, Tail>
//    이번 단계의 코드는 없어도 됩니다. 5단계의 코드만 있으면 됩니다.
template<typename Head, typename Tail> struct Append<Typelist<Head, Tail>, NullType >
{
	typedef Typelist<Head, Tail> type;
};


// 5. Typelist<Head, Tail>, T =>  Typelist<Head, Append<Tail, T>::type> 

template<typename Head, typename Tail, typename T> struct Append<Typelist<Head, Tail>, T >
{
	typedef Typelist<Head, typename Append<Tail, T>::type> type;
};





template<typename T> void test()
{
	typename Append<T, int>::type t1;

	cout << typeid(t1).name() << endl;  // int, char, double, int, NullType
}

int main()
{
	test<TYPELIST_3(int, char, double)>();
}
