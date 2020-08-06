#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void read_int()
{
	vector<int> i;
	int j = 0;
	while (cin>>j)
	{
		i.push_back(j);
	}
	for (int j: i)
	{
		cout << j << endl;
	}
}

void read_string()
{
	vector<string> i;
	string j;
	while (cin >> j)
	{
		i.push_back(j);
	}
	for (string j : i)
	{
		cout << j << endl;
	}
}

int main()
{

	//read_int();
	read_string();
	return 0;
}