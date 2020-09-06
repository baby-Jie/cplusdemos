#pragma once

#include <iostream>
using namespace std;

class Point
{
public:
	Point()
	{
		std::cout << "Point���޲ι��캯��" << std::endl;
	}
	Point(int x, int y)
	{
		std::cout << "Point�Ĺ��캯��" << std::endl;
		this->x = x;
		this->y = y;
	}

	// �������캯��
	Point(const Point& p)
	{
		this->copyObj(p);
		std::cout << "Point�Ŀ������캯��" << std::endl;
	}

	~Point()
	{
		std::cout << "Point����������" << std::endl;
	}

	Point& operator=(const Point& p)
	{
		if (&p == this)
		{
			return *this;
		}
		cout << "��ֵ���������أ�Ҳ���Խи�ֵ���캯��" << endl;
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

