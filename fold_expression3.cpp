#include <iostream>
using namespace std;

template<typename ... Types> void foo(Types ... args)
{
	// I : 초기값
	// I + ... + args;  // (((I + E1) + E2) + E3)

	(cout << ... << args); // ((( cout << 1) << 2) << 3)
}
int main()
{
	foo(1, 2, 3);

	// 아래 코드 참고
	//	(((cout << 1) << 2) << 3) << endl; // 123

}