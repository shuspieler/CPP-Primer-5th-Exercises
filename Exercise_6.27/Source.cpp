#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;

int func(initializer_list<int> li)
{
	int tmp = 0;
	for (auto i = li.begin(); i != li.end(); ++i)
	{
		tmp += *i;
	}
	return tmp;
}

int main()
{
	cout << func({ 1,2,3 }) << endl;
	cout << func({ 1 }) << endl;
	cout << func({}) << endl;
	cout << func({ 2,3,4444,1 }) << endl;
	return 0;
}