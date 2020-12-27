#include<iostream>
#include<forward_list>

using std::cout;
using std::endl;
using std::forward_list;

int main()
{
	forward_list<int> fli = { 1,2,1,3,4,5,8,11,23,32,45,66 };
	auto prev = fli.before_begin();
	auto curr = fli.begin();
	while (curr != fli.end())
	{
		if (*curr % 2)
		{
			curr = fli.erase_after(prev);
		}
		else
		{
			prev = curr;
			++curr;
		}
	}
	for (auto i = fli.begin(); i != fli.end(); ++i)
	{
		cout << *i << " ";
	}
	return 0;
}