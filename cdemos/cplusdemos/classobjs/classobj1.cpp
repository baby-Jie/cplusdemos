#include <iostream>
#include "../Point.h"
using namespace std;

Point test()
{
	Point p(1, 2);
	return p;
}

int main()
{
	Point p(1, 2);

	Point p2 = test();

	//Point p2(p); // copy构造函数的调用场景1

	//Point p3 = p; // copy构造函数的调用场景2

	//Point p4 = { 1, 2 }; // 这里会调用构造函数
	return 0;
}