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

	//Point p2(p); // copy���캯���ĵ��ó���1

	//Point p3 = p; // copy���캯���ĵ��ó���2

	//Point p4 = { 1, 2 }; // �������ù��캯��
	return 0;
}