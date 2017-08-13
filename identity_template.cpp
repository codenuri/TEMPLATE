template<typename T>
struct identity
{
	typedef T type;
};

template<typename T>
void foo(typename identity<T>::type a)
{
}

template<typename T>
void foo(T a, typename identity<T>::type b)
{
}
int main()
{
	foo(10);			// A
	foo<int>(10);		// B
	foo(10, 10);		// C
	foo<int>(10, 10);	// D
}
