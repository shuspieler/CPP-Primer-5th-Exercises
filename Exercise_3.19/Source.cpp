#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> a(10, 42);
	vector<int> b{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
	vector<int> c;
	for (int j = 0; j < 10; j++)
	{
		c.push_back(42);
	}

	cout << "the size of a: " << a.size() << endl;
	cout << "content of a: " << endl;
	for (auto i : a)
	{
		cout << i << endl;
	}
	cout << endl;

	cout << "the size of b: " << b.size() << endl;
	cout << "content of b: " << endl;
	for (auto i : b)
	{
		cout << i << endl;
	}
	cout << endl;

	cout << "the size of c: " << c.size() << endl;
	cout << "content of c: " << endl;
	for (auto i : c)
	{
		cout << i << endl;
	}
	cout << endl;

	return 0;
}