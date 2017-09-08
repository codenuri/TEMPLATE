// 함수를 만드는 틀

template<typename T>
T square(T a)
{
	T ret = a * a;
	return ret;
}

int main()
{
	square(3);   
	square(3.3); 
}
