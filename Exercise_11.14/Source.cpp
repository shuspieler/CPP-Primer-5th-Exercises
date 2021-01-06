#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<map>
#include<utility>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::map;
using std::getline;
using std::istringstream;
using std::pair;

int main()
{
	map<string, vector<pair<string, string>>> msvs;
	string line, children;
	while (getline(cin, line))
	{
		istringstream name(line);
		string Last_name;
		string Children_name;
		string Birthday;
		name >> Last_name >> Children_name >> Birthday;
		msvs[Last_name].push_back({ Children_name , Birthday });
	}
	for (const auto& w : msvs)
	{
		cout << w.first << "'s children: " << endl;
		for (auto i : w.second)
		{
			cout << "      " << "Name: " << i.first << " Birthday: " << i.second << endl;
		}
		cout << endl;
	}
	return 0;
}