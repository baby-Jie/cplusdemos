#pragma once

#include <iostream>
class Point
{
public:
	int x;
	int y;
	Point(int x, int y)
	{
		std::cout << "Point�Ĺ��캯��" << std::endl;
		this->x = x;
		this->y = y;
	}

	// �������캯��
	Point(const Point& p)
	{
		this->x = p.x;
		this->y = p.y;
		std::cout << "Point�Ŀ������캯��" << std::endl;
	}
	
	~Point()
	{
		std::cout << "Point����������" << std::endl;
	}
};

