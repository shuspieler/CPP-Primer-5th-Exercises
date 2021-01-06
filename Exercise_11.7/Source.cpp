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
using std::map;
using std::getline;
using std::istringstream;

int main()
{
	map<string, vector<string>> msvs;
	string line, children;
	while (getline(cin, line))
	{
		istringstream name(line);
		string Last_name;
		name >> Last_name;
		while (name >> children)
		{
			msvs[Last_name].push_back(children);
		}
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