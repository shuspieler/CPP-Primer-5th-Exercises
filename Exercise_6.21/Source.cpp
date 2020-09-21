#include<iostream>

using namespace std;


bool int_compare(const int i, const int* j)
{
	if (i > * j)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int tmp_01, tmp_02;
	cin >> tmp_01 >> tmp_02;
	if (int_compare(tmp_01, &tmp_02))
	{
		cout << "tmp_01 is bigger than tmp_02" << endl;
	}
	else
	{
		cout << "tmp_01 is not bigger than tmp_02" << endl;
	}
	return 0;
}