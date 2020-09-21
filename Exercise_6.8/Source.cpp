#include<iostream>
#include"Chapter6.h"

using namespace std;

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << func_01(i) << " " << func_02(i) << " " << func_03(i) << endl;
	}
	return 0;

}

int func_01(int val)
{
	return (val);
}

int func_02(int val)
{
	int var_01 = 1;
	++var_01;
	return (var_01);
}

int func_03(int val)
{
	static int var_02;
	return (var_02++);
}

