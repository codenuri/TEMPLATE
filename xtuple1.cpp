#include <iostream>
using namespace std;

// Step 1.  
template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;
};

int main()
{
	xtuple<>		          t0;
	xtuple<int>		          t1;
	xtuple<int, char>         t2;
	xtuple<int, char, double> t3;

}
