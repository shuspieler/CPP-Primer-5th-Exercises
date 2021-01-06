#include<iostream>
#include<string>
#include<list>
#include<map>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::list;
using std::map;
using std::size_t;

int main()
{
	map<string, list<size_t>> msl{ {"ghi", {100, 200}}, {"abc", {1, 3, 5}}, {"def", {2, 4}}, {"Passerby", {1}} };
	for (const auto& i : msl)
	{
		cout << i.first << ":";
		for (const auto& j : i.second)
		{
			cout << " " << j;
		}
		cout << endl;
	}
	return 0;
}