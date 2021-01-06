#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<map>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::multimap;
using std::getline;
using std::istringstream;

int main()
{
	multimap<string, vector<string>> msvs;
	string line, children;
	while (getline(cin, line))
	{
		istringstream name(line);
		string Last_name;
		name >> Last_name;
		vector<string> tmp;
		while (name >> children)
		{
			tmp.push_back(children);
		}
		msvs.insert({ Last_name, tmp });
	}
	for (const auto& w : msvs)
	{
		cout << w.first << "'s children: ";
		for (auto i : w.second)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}