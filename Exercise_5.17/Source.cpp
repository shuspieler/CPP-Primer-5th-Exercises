#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v1 = { 0, 1, 1 };
	vector<int> v2 = { 0, 1, 1, 2, 3, 5, 8 };
	vector<int> v3 = { 1,2,3 };

	unsigned i;
	bool prefix = true;

	//Compare v1 and v2
	i = v1.size() >= v2.size() ? v2.size() : v1.size();
	for (unsigned j = 0; j < i; ++j)
	{
		if (v1[j] != v2[j])
		{
			prefix = false;
		}
	}
	if (prefix == true)
	{
		cout << "one vector is a prefix of the other." << endl;
	}
	else
	{
		cout << "one vector is NOT a prefix of the other." << endl;
	}

	prefix = true;

	//Compare v1 and v3
	i = v1.size() >= v3.size() ? v3.size() : v1.size();
	for (unsigned j = 0; j < i; ++j)
	{
		if (v1[j] != v3[j])
		{
			prefix = false;
		}
	}
	if (prefix == true)
	{
		cout << "one vector is a prefix of the other." << endl;
	}
	else
	{
		cout << "one vector is NOT a prefix of the other." << endl;
	}

	prefix = true;

	//Compare v2 and v3
	i = v2.size() >= v3.size() ? v3.size() : v2.size();

	unsigned j = 0;
	while (j < i)
	{
		if (v2[j] != v3[j])
		{
			prefix = false;
		}
		++j;
	}

	if (prefix == true)
	{
		cout << "one vector is a prefix of the other." << endl;
	}
	else
	{
		cout << "one vector is NOT a prefix of the other." << endl;
	}

	prefix = true;

	//Compare v1 and v2
	i = v1.size() >= v2.size() ? v2.size() : v1.size();

	unsigned k = 0;
	while (k < i)
	{
		if (v1[k] != v2[k])
		{
			prefix = false;
		}
		++k;
	}

	if (prefix == true)
	{
		cout << "one vector is a prefix of the other." << endl;
	}
	else
	{
		cout << "one vector is NOT a prefix of the other." << endl;
	}

}