
template<typename T> void foo(T a, T b)
{
}

template<typename T> void goo(T& a, T& b)
{
}

int main()
{
	// "orange" : const char [7] 
	// "apple"  : const char [6] 
	foo("orange", "apple"); // ok    foo( const char*, const char*)
	goo("orange", "apple"); // error goo( const char [7], const char [6])
}

