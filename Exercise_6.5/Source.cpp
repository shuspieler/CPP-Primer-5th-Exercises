#include<iostream>

using namespace std;

int func(int val)
{
	return abs(val);
}

int main()
{
	cout << func(-5) << endl;
	return 0;
}