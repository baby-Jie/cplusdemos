#pragma once

template<typename T>
class Person
{
public:
	int m_id;
	T m_name;

	Person(int id, T name);
};

