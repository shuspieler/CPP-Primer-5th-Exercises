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
	cout << fact(5) << endl;
	return 0;
}
