#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;


class A
{

};

class B :A
{

};

/// <summary>
/// 测试一个类是否是另外一个类的子类
/// </summary>
void testBaseOf()
{
	auto val = std::is_base_of<A, B>::value; // 1

	cout << val << endl;
}

int main1()
{
	testBaseOf();
	system("pause");
	return 0;
}
