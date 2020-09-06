#pragma once

#include <iostream>
using namespace std;

class Point
{
public:
	Point()
	{
		std::cout << "Point的无参构造函数" << std::endl;
	}
	Point(int x, int y)
	{
		std::cout << "Point的构造函数" << std::endl;
		this->x = x;
		this->y = y;
	}

	// 拷贝构造函数
	Point(const Point& p)
	{
		this->copyObj(p);
		std::cout << "Point的拷贝构造函数" << std::endl;
	}

	~Point()
	{
		std::cout << "Point的析构函数" << std::endl;
	}

	Point& operator=(const Point& p)
	{
		if (&p == this)
		{
			return *this;
		}
		cout << "赋值操作符重载，也可以叫赋值构造函数" << endl;
		this->x = p.x;
		this->y = p.y;
		return *this;
	}

	int getX()
	{
		return this->x;
	}

	int getY()
	{
		return this->y;
	}
private:
	int x = 1;
	int y;
	void copyObj(const Point& p)
	{
		this->x = p.x;
		this->y = p.y;
	}
};

