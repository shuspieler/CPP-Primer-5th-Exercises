#include<iostream>
#include<vector>
#include<iterator>
#include<list>

using std::cout;
using std::endl;
using std::vector;
using std::copy;
using std::inserter;
using std::back_inserter;
using std::front_inserter;
using std::list;


int main()
{
	vector<int> vi = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> vi_i, vi_bi, vi_fi;
	copy(vi.cbegin(), vi.cend(), inserter(vi_i, vi_i.begin()));
	copy(vi.cbegin(), vi.cend(), front_inserter(vi_fi));
	copy(vi.cbegin(), vi.cend(), back_inserter(vi_bi));

	for (int i : vi_i)
	{
		cout << i << " ";
	}
	cout << endl;

	for (int i : vi_fi)
	{
		cout << i << " ";
	}
	cout << endl;

	for (int i : vi_bi)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}