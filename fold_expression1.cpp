#include <iostream>
using namespace std;

template<typename ... Types> void foo(Types ... args)
{
	int x[] = { args... }; // ∆–≈œ...

	int n = (args + ...); // pack op ...
						  // E1 op ( E2 op ( E3 op ( E4 op E5) ) )
						  // 1 + (2 + (3 + (4 + 5)))

	cout << n << endl;
}
int main()
{
	foo(1, 2, 3, 4, 5);
}