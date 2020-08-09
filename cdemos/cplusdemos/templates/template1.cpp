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

void testTemplateFun()
{
	templateFun("string");
	templateFun(123);
}

int main()
{
	system("pause");
	return 0;
}
