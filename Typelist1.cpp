#include <iostream>
using namespace std;

// Andrei Alexandrescue, loki 라이브러리, Modern C++ Design

// 1. 값을 보관하지 않는다.
// 2. N개의 타입을 보관한다.
template<typename T, typename U> struct Typelist
{
	typedef T Head;
	typedef U Tail;
};

int main()
{
	Typelist<int, double> t1; //
	Typelist<int, Typelist<int, double>> t2; //
	Typelist<int, Typelist<int, Typelist<char, double>>> t3; //

}











