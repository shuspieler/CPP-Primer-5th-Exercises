#include<iostream>
#include<vector>


using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int>::iterator contain(vector<int>::iterator first, vector<int>::iterator last, int value)
{
	for (vector<int>::iterator i = first; i < last; i++)
	{
		if (*i == value)
		{
			return i;
		}
	}
	return last;
}

int main()
{
	vector<int> v = { 1, 2, 4 };

	vector<int>::iterator param_first = v.begin();
	vector<int>::iterator param_last = v.end();
	vector<int>::iterator c_r = contain(param_first, param_last, 4);

	if (c_r != param_last)
	{
		cout << *c_r << endl;
	}
	else
	{
		cout << "no match" << endl;
	}

	param_first = v.begin();
	param_last = v.end() - 1;
	c_r = contain(param_first, param_last, 4);

	if (c_r != param_last)
	{
		cout << *c_r << endl;
	}
	else
	{
		cout << "no match" << endl;
	}
	return 0;
}