#include<iostream>
#include<vector>
#include<list>
#include<map>

using std::cout;
using std::endl;
using std::vector;
using std::map;
using std::list;

int main()
{
	vector<int> vi{ 2,3,5,7 };
	list<int> li{ 11,13,17,23 };
	map<vector<int>::iterator, int> mvii;
	for (auto i = vi.begin(); i != vi.end(); ++i)
	{
		mvii[i] = (*i);
	}
	for (const auto& i : mvii)
	{
		cout << *i.first << " " << i.second << endl;
	}

	/*map<list<int>::iterator, int> mlii;
	for (auto i = li.begin(); i != li.end(); ++i)
	{
		mlii[i] = (*i);
	}
	for (const auto& i : mlii)
	{
		cout << *i.first << " " << i.second << endl;
	}*/
	return 0;
}