#pragma once

#include <iostream>
class Point
{
public:
	int x;
	int y;
	Point(int x, int y)
	{
		std::cout << "Point的构造函数" << std::endl;
		this->x = x;
		this->y = y;
	}

	// 拷贝构造函数
	Point(const Point& p)
	{
		this->x = p.x;
		this->y = p.y;
		std::cout << "Point的拷贝构造函数" << std::endl;
	}
	
	~Point()
	{
		std::cout << "Point的析构函数" << std::endl;
	}
};

