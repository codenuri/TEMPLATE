template<typename T, typename ThreadModel> class List
{
	ThreadModel tm;
public:
	void push_front(const T& a)
	{
		tm.Lock();
		//......
		tm.Unlock();
	}
};

// 동기화 정책을 담은 정책 클래스 : 반드시 Lock()/Unlock() 이 있어야 한다.
struct NoLock
{
	inline void Lock() {}
	inline void Unlock() {}
};

struct Win32Lock
{
	inline void Lock()   { } // implement lock using win32 api
	inline void Unlock() { }
};

struct LinuxLock
{
	inline void Lock() { } // implement lock using linux system call
	inline void Unlock() { }
};


List<int, NoLock> st;

int main()
{
	st.push_front(10);
}