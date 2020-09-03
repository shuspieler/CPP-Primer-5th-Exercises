#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void func_01()
{
begin:
	int sz = get_size();
	if (sz <= 0)
	{
		goto begin;
	}
}

void func_02()
{
	int sz;
	do
		sz = get_size();
	while (sz <= 0);
}