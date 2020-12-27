#include<iostream>
#include<vector>


using std::cin;
using std::cout;
using std::endl;
using std::vector;

bool contain(vector<int>::iterator first, vector<int>::iterator last, int value)
{
	for (vector<int>::iterator i = first; i < last; i++)
	{
		if (*i == value)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	vector<int> v = { 1, 2, 4 };
	cout << contain(v.begin(), v.end(), 4) << endl;
	cout << contain(v.begin(), v.end() - 1, 4) << endl;
	return 0;
}