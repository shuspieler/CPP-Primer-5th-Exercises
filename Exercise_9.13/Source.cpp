#include<iostream>
#include<list>
#include<vector>

using std::list;
using std::vector;

int main()
{
	list<int> li = { 2, 4, 7 };
	vector<int> vd{ 3, 4 };

	vector<double> vd1 = { li.begin(), li.end() };
	vector<double> vd2 = { vd.begin(), vd.end() };

	return 0;
}