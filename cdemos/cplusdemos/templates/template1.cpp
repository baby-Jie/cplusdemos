#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

template<typename T>
void templateFun(T a)
{
	cout << a << endl;
}

int main_template1()
{
	templateFun("string");
	templateFun(123);
	system("pause");
	return 0;
}
