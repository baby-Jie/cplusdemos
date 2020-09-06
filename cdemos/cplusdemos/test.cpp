#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "Point.h"
using namespace std;

int x;

Point foo(Point p)
{
	cout << p.getX() << endl;
	return p;
}

int main()
{
	Point p;
	Point p2;
	p = p2;
	//foo(p);
	//Point p2 = foo(p);
	system("pause");
	return 0;
}
