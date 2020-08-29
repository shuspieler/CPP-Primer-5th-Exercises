#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int tmp;
	vector<int> v;
	while (cin >> tmp)
	{
		v.push_back(tmp);
	}
	cout << endl;

	for (auto& i : v)
	{
		i = ((i % 2 == 0) ? i: i* i);
	}
	for (auto j : v)
	{
		cout << j << endl;
	}
	return 0;
}