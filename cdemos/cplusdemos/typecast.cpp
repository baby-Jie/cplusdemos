#include <iostream>
using namespace std;

int main_cast()
{
	// c语言中能够隐式转换的 在c++中使用static_cast
	double d = 1.234;
	int a = static_cast<int>(d);
	cout << a << endl;

	// c语言中的大多数强制类型转换使用这个 reinterpret
	double* dp = &d;
	int* ap = reinterpret_cast<int*>(dp);

	// const_cast 顾名思义
	const int* cap = &a;
	int* ap2 = const_cast<int*>(cap);
	*ap2 = 123;
	
	cout << *ap2 << endl;

	// dynamic_cast 一般是父子类对象指针的相互转换
	return 0;
}