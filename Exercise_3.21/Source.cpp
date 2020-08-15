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
	auto b = v1.begin();
	while (b != v1.end())
	{
		cout << *b << endl;
		b++;
	}
	cout << endl;

	cout << "the size of v2: " << v2.size() << endl;
	cout << "content of v2: " << endl;
	auto c = v2.begin();
	while (c != v2.end())
	{
		cout << *c << endl;
		c++;
	}
	cout << endl;


	cout << "the size of v3: " << v3.size() << endl;
	cout << "content of v3: " << endl;
	auto d = v3.begin();
	while (d != v3.end())
	{
		cout << *d << endl;
		d++;
	}
	cout << endl;


	cout << "the size of v4: " << v4.size() << endl;
	cout << "content of v4: " << endl;
	auto e = v4.begin();
	while (e != v4.end())
	{
		cout << *e << endl;
		e++;
	}
	cout << endl;


	cout << "the size of v5: " << v5.size() << endl;
	cout << "content of v5: " << endl;
	auto f = v5.begin();
	while (f != v5.end())
	{
		cout << *f << endl;
		f++;
	}
	cout << endl;


	cout << "the size of v6: " << v6.size() << endl;
	cout << "content of v6: " << endl;
	auto g = v6.begin();
	while (g != v6.end())
	{
		cout << *g << endl;
		g++;
	}
	cout << endl;


	cout << "the size of v7: " << v7.size() << endl;
	cout << "content of v7: " << endl;
	auto h = v7.begin();
	while (h != v7.end())
	{
		cout << *h << endl;
		h++;
	}
	cout << endl;

}