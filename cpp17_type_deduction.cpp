#include <list>
using namespace std;

// C++17 class template type deduction

template<typename T> class Vector
{
public:
	Vector(int sz, T value) {}

	template<typename C> Vector(const C& c) {}
	template<typename IT> Vector(IT first, IT second) {}
};
template<typename C> Vector(const C& c)->Vector<typename C::value_type>;
template<typename IT> Vector(IT first, IT second)->Vector<typename IT::value_type >;

int main()
{
	Vector v1(10, 5);
	list<int> s = { 1,2,3 };

	Vector v2(s); //
	Vector v3(s.begin(), s.end());

	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	Vector v4(x, x + 10); // error.
}












