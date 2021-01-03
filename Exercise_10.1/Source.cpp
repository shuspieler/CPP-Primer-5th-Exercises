#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::string;
using std::count;

int main()
{
	char c = 's';
	vector<char> vc = { 'a', 'b', 's' };
	list<char> lc = { 's', 'd', 's', 'e' };
	string s = "fsgsshsi";

	cout << count(vc.begin(), vc.end(), c) << endl;
	cout << count(lc.begin(), lc.end(), c) << endl;
	cout << count(s.begin(), s.end(), c) << endl;

	return 0;
}