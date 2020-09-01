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

template<class T>
class TempA
{
public:
	T add(T a, T b)
	{
		return a + b;
	}

	T add2(T a, T b);
};

template <class T>
T TempA<T>::add2(T a, T b)
{
	return a + b;
}

class A
{
public:
	~A()
	{
		cout << "Îö¹¹º¯Êý" << endl;
	}
};


int main_template()
{
	auto_ptr<A> pa(new A);
	
	system("pause");
	return 0;
}
