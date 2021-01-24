#include<iostream>
#include<vector>
#include<memory>

using std::cout;
using std::endl;
using std::vector;

vector<int>* f_vi_create()
{
	vector<int>* vi_p = new vector<int>;
	return vi_p;
}

void f_vi_set(vector<int>* i)
{
	*i = { 2,3,5,8,11,13,17 };
}

void f_vi_print(vector<int>* i)
{
	for (int j : *i)
	{
		cout << j << " ";
	}
	cout << endl;
}


int main()
{
	vector<int>* tmp = f_vi_create();
	f_vi_set(tmp);
	f_vi_print(tmp);
	delete tmp;
	return 0;
}