#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int reset(int& i)
{
	i = 0;
	return 0;
}

int main()
{
	int val = 2;
	cout << "Original: " << val << endl;
	reset(val);
	cout << "Reset: " << val << endl;
	return 0;
}