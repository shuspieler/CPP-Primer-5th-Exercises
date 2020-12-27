#include<iostream>
#include<vector>
#include<string>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<char> vc = { 'v','c'};

	string s_01(vc.begin(), vc.end());
	for (auto i : s_01)
	{
		cout << i << endl;
	}

	return 0;
}