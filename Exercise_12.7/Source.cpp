#include<iostream>
#include<vector>
#include<memory>

using std::cout;
using std::endl;
using std::vector;
using std::shared_ptr;
using std::make_shared;

shared_ptr<vector<int>> f_vi_create()
{
	shared_ptr<vector<int>> svi(make_shared<vector<int>>());
	return svi;
}

void f_vi_set(shared_ptr<vector<int>> i)
{
	*i = { 2,3,5,8,11,13,17 };
}

void f_vi_print(shared_ptr<vector<int>> i)
{
	for (int j : *i)
	{
		cout << j << " ";
	}
	cout << endl;
}


int main()
{
	auto tmp = f_vi_create();
	f_vi_set(tmp);
	f_vi_print(tmp);
	return 0;
}