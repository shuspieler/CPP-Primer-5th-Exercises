#include<iostream>
#include<map>
#include<string>
#include<utility>

using std::cout;
using std::endl;
using std::map;
using std::string;
using std::pair;

int main()
{
	map<int, string> mis = { {1,"A"}, {2, "B"}, {4, "Zzz"} };

	for (pair<int, string> i : mis)
	{
		cout << i.first << " " << i.second << endl;
	}
	cout << endl;

	auto mis_it = mis.begin();
	mis_it->second = "a";
	++mis_it;
	mis_it->second = "b";
	++mis_it;
	mis_it->second = "zZZ";

	for (map<int, string>::iterator i = mis.begin(); i != mis.end(); ++i)
	{
		cout << (*i).first << " " << i->second << endl;
	}

	return 0;
}