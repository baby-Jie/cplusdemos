#include <iostream>
using namespace std;

int main_cast()
{
	// c�������ܹ���ʽת���� ��c++��ʹ��static_cast
	double d = 1.234;
	int a = static_cast<int>(d);
	cout << a << endl;

	// c�����еĴ����ǿ������ת��ʹ����� reinterpret
	double* dp = &d;
	int* ap = reinterpret_cast<int*>(dp);

	// const_cast ����˼��
	const int* cap = &a;
	int* ap2 = const_cast<int*>(cap);
	*ap2 = 123;
	
	cout << *ap2 << endl;

	// dynamic_cast һ���Ǹ��������ָ����໥ת��
	return 0;
}