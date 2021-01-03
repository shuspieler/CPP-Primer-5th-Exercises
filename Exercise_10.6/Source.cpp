#include<iostream>
#include<iterator>
#include<vector>

using std::cout;
using std::endl;
using std::vector;
using std::back_inserter;
using std::fill_n;

int main()
{
	vector<int> vec_01(10, 7);
	for (int i : vec_01)
	{
		cout << i << " ";
	}
	cout << endl;

	fill_n(vec_01.begin(), 10, 5);
	for (int i : vec_01)
	{
		cout << i << " ";
	}
	cout << endl;

	vector<int> vec_02;
	//for (int i : vec_02)
	//{
	//	cout << i << " ";
	//}
	cout << endl;
	fill_n(back_inserter(vec_02), 10, 1);
	for (int i : vec_02)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}