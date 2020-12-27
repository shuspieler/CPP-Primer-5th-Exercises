#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = vi.begin();
	while (iter != vi.end())
	{
		if (*iter % 2)
		{
			iter = vi.insert(iter, *iter);
		}
		++iter;
	}
	for (auto i : vi)
	{
		cout << i << " ";
	}
	return 0;
}
