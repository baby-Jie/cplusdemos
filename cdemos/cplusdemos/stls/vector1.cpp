#include <iostream>
#include <vector>

using namespace std;

class A
{
	
};

void traverse_vector(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}

void test1()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	//v1.erase(v1.begin() + 1); // É¾³ı
	v1.insert(v1.begin() + 1, 99); // ²åÈë
	
	traverse_vector(v1);
}



int main_vector()
{
	cout << sizeof(A) << endl;
	cout << "hello" << endl;

	return 0;
}