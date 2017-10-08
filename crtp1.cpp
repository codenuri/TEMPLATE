#include <iostream>
using namespace std;

// CRTP : Curiously Reccuring Template Pattern
template<typename T> class Window
{
public:
	void msgLoop() // void msgLoop(Window* this)
	{
		static_cast<T*>(this)->onKeyDown(); 
	}
	void onKeyDown() { cout << "Window onKeyDown" << endl; }
};

class MyWindow : public Window<MyWindow>
{
public:
	void onKeyDown() { cout << "Window onKeyDown" << endl; }
};

int main()
{
	MyWindow w;
	w.msgLoop();
}