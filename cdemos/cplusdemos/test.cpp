#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "Point.h"
#include <deque>
#include <stack>
using namespace std;

int x;

Point foo(Point p)
{
	cout << p.getX() << endl;
	return p;
}

void replaceSpace(char* str, int length) {

    int space_count = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            space_count++;
        }
    }
    int new_count = length + 2 * space_count;
    char* new_str = new char[new_count];
    int index = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            new_str[index++] = '%';
            new_str[index++] = '2';
            new_str[index++] = '0';
        }
        else
        {
            new_str[index++] = str[i];
        }
    }
    cout << new_str << endl;
    str = new_str;
}

int main()
{
    stack<int> s1;
    int a  = s1.pop();
    deque<int> d1;
    d1.front();
    d1.pop_front();
    d1.front();
    char chs[] = "hello world";
    replaceSpace(chs, strlen(chs));
	system("pause");
	return 0;
}
