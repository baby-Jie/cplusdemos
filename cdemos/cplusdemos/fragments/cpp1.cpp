#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;


class A
{

};

class B :A
{

};

/// <summary>
/// ����һ�����Ƿ�������һ���������
/// </summary>
void testBaseOf()
{
	auto val = std::is_base_of<A, B>::value; // 1

	cout << val << endl;
}

void intToString()
{
	int num = 111;

	// ����1
	string str = std::to_string(num);
	char buffer[100];

	// ����2
	_itoa(num, buffer, 10);
	str = buffer;

	// ����3 sprintf

	// ����4 stringstream ���� ��������
	
	cout << str << endl;
}

/// <summary>
/// ����������е�ʱ��
/// Sleep(millionSeconds); windows.h
/// </summary>
void testRunTime()
{
	clock_t start, end;
	start = clock();

	for (int i = 0; i < 10; i++)
	{
		Sleep(200);
	}
	end = clock();

	cout << end - start << endl;
}

int main_cpp1()
{
	testRunTime();
	return 0;
}
