#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int temp;
	std::vector<int> v;
	while (cin >> temp)
	{
		v.push_back(temp);
	}
	for (auto i = v.begin(); i != v.end(); i++)
	{
		*i = 2 * (*i);
	}
	for (auto j : v)
	{
		cout << j << " ";
	}
	return 0;
}