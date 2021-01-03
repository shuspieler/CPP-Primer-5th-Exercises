#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<list>

using std::cout;
using std::vector;
using std::list;
using std::endl;
using std::copy;
using std::back_inserter;

int main()
{
	vector<int> vi = { 2, 3, 5, 7, 11, 13, 17, 17, 23 };
	list<int> li;
	copy(vi.crbegin() + 2, vi.crend() - 2, back_inserter(li));
	
	for (int i : li)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}