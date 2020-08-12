#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

vector<int> v1;
vector<int> v2(10);
vector<int> v3(10, 42);
vector<int> v4{ 10 };
vector<int> v5{ 10, 42 };
vector<string> v6{ 10 };
vector<string> v7{ 10, "hi" };

int main()
{
	cout << "the size of v1: " << v1.size() << endl;
	cout << "content of v1: " << endl;
	for (auto i : v1)
	{
		cout << i << endl;
	}
	cout << endl;

	cout << "the size of v2: " << v2.size() << endl;
	cout << "content of v2: " << endl;
	for (auto i : v2)
	{
		cout << i << endl;
	}
	cout << endl;

	cout << "the size of v3: " << v3.size() << endl;
	cout << "content of v3: " << endl;
	for (auto i : v3)
	{
		cout << i << endl;
	}
	cout << endl;

	cout << "the size of v4: " << v4.size() << endl;
	cout << "content of v4: " << endl;
	for (auto i : v4)
	{
		cout << i << endl;
	}
	cout << endl;

	cout << "the size of v5: " << v5.size() << endl;
	cout << "content of v5: " << endl;
	for (auto i : v5)
	{
		cout << i << endl;
	}
	cout << endl;

	cout << "the size of v6: " << v6.size() << endl;
	cout << "content of v6: " << endl;
	for (auto i : v6)
	{
		cout << i << endl;
	}
	cout << endl;

	cout << "the size of v7: " << v7.size() << endl;
	cout << "content of v7: " << endl;
	for (auto i : v7)
	{
		cout << i << endl;
	}
	cout << endl;
	return 0;
}