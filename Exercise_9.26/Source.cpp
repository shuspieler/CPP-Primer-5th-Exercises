#include<iostream>
#include<vector>
#include<list>

using std::vector;
using std::list;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	
	vector<int> vi;
	list<int> li;
	vi.assign(begin(ia), end(ia));
	li.assign(begin(ia), end(ia));

	auto vi_it = vi.begin();
	while (vi_it != vi.end())
	{
		if (*vi_it % 2 == 0)
		{
			vi_it = vi.erase(vi_it);
		}
		else
		{
			++vi_it;
		}
	}

	auto li_it = li.begin();
	while (li_it != li.end())
	{
		if (*li_it % 2 == 1)
		{
			li_it = li.erase(li_it);
		}
		else
		{
			++li_it;
		}
	}

	cout << "odd values are removed in list: " << endl;
	for (auto i : li)
	{
		cout << i << " " << endl;
	}

	cout << "even values are removed in vector: " << endl;
	for (auto i : vi)
	{
		cout << i << " " << endl;
	}

	return 0;
}