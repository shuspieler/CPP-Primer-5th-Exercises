#include<iostream>
#include<map>
#include<string>
#include<utility>

using std::multimap;
using std::string;
using std::cout;
using std::endl;
using std::pair;

void find_erase(multimap<string, string> &i, string j)
{
	while (i.lower_bound(j) != i.upper_bound(j))
	{
		i.erase(i.lower_bound(j));
	}
}

int main()
{
	multimap<string, string> mss{
		{"Passerby", "Engineer"},
		{"Zhang", "Foods killer"},
		{"Passerby", "Photographer"},
		{"Wang", "Ganfanren"} };

	for (auto i : mss)
	{
		cout << i.first << " " << i.second << endl;
	}
	cout << endl;

	find_erase(mss, "Li");

	for (auto i : mss)
	{
		cout << i.first << " " << i.second << endl;
	}
	cout << endl;

	find_erase(mss, "Wang");

	for (auto i : mss)
	{
		cout << i.first << " " << i.second << endl;
	}
	cout << endl;

	find_erase(mss, "Passerby");

	for (auto i : mss)
	{
		cout << i.first << " " << i.second << endl;
	}
	cout << endl;

	return 0;
}