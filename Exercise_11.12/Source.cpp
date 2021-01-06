#include<iostream>
#include<vector>
#include<string>
#include<utility>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::pair;
using std::make_pair;

int main()
{
	string s;
	int i;
	vector< pair<string, int>> vp;
	while (cin >> s >> i)
	{
		//pair<string, int> p(s, i);
		//vp.push_back(p);

		//vp.push_back(make_pair(s, i));

		//pair<string, int> p = { s, i };
		//vp.push_back(p);

		vp.emplace_back(s, i);
	}
	for (auto i : vp)
	{
		cout << i.first << " " << i.second << endl;
	}
	return 0;
}