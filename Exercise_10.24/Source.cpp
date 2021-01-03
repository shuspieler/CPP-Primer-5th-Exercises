#include<iostream>
#include<functional>
#include<string>
#include<vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::placeholders::_1;
using std::bind;
using std::find_if;

bool check_size(const string& s, string::size_type sz)
{
	return s.size() < sz;
}

int main()
{
	string s("C++ Primer 5th");
	vector<int>  vi = { 2, 3, 5, 7, 11, 13, 17, 19, 23 };
	auto it = find_if(vi.cbegin(), vi.cend(), bind(check_size, s , _1));
	if (it != vi.cend())
	{
		cout << *it << endl;
	}
	return 0;
}