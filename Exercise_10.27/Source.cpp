#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
#include<iterator>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::string;
using std::unique_copy;
using std::back_inserter;
using std::sort;

int main()
{
	vector<string> vs = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };

	sort(vs.begin(), vs.end());
	for (string i : vs)
	{
		cout << i << " ";
	}
	cout << endl;

	list<string> ls;
	unique_copy(vs.begin(), vs.end(), back_inserter(ls));

	
	for (string i : ls)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}