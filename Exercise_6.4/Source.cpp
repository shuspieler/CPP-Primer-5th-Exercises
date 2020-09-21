#include<iostream>

using namespace std;

int fact(int val)
{
	int res = 1;
	for (int temp = val; temp > 0; --temp)
	{
		res *= temp;
	}
	return res;
}

int main()
{
	int temp;
	while (cin >> temp)
	{
		cout << fact(temp) << endl;
	}
	return 0;
}
