#include<iostream>
#include<vector>
#include<cstddef>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
	constexpr size_t array_size = 10;
	int a[array_size] = { 0 };
	int* p = &a[5];
	for (int i = -5; i < int(array_size) - 5; i++) //size_t is an unsigned value
	{
		p[i] = i;
	}
	for (int j = 0; j < array_size; j++)
	{
		cout << a[j] << " " << endl;
	}
	
	int b[array_size] = { -5,-4,-3,-2,-1,0,1,2,3,4 };
	int c[array_size] = { -5,-4,-3,-2,-1,0,1,2,3,999 };
	int d[array_size+1] = { -5,-4,-3,-2,-1,0,1,2,3,4,5 };
	
	int* beg = std::begin(a);
	int* last = std::end(a);

	bool flag_01 = true;
	for (int k = 0; k<array_size; k++)
	{
		if (a[k] != b[k] || (end(a)-begin(a) != end(b)-begin(b)) )
		{
			flag_01 = false;
		}
	}
	if (flag_01 == true)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}

	bool flag_02 = true;
	for (int k = 0; k < array_size; k++)
	{
		if (a[k] != c[k] || (end(a) - begin(a) != end(c) - begin(c)))
		{
			flag_02 = false;
		}
	}
	if (flag_02 == true)
	{
		cout << "a == c" << endl;
	}
	else
	{
		cout << "a != c" << endl;
	}

	bool flag_03 = true;
	for (int k = 0; k < array_size; k++)
	{
		if (a[k] != d[k] || (end(a) - begin(a) != end(d) - begin(d)))
		{
			flag_03 = false;
		}
	}
	if (flag_03 == true)
	{
		cout << "a == d" << endl;
	}
	else
	{
		cout << "a != d" << endl;
	}

	vector<int> e = { -5,-4,-3,-2,-1,0,1,2,3,4 };
	vector<int> f(e);
	vector<int> g(10, 0);

	if (e == f)
	{
		cout << "e == f" << endl;
	}
	else
	{
		cout << "e != f" << endl;
	}

	if (e == g)
	{
		cout << "e == g" << endl;
	}
	else
	{
		cout << "e != g" << endl;
	}

	return 0;
}