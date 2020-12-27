#include<iostream>
#include<list>
#include<deque>

using std::cout;
using std::endl;
using std::list;
using std::deque;

int main()
{
	list<int> li = { 2,4,5,7,10,11,1 };
	deque<int> even;
	deque<int> odd;

	for (auto i = li.cbegin(); i != li.cend(); i++)
	{
		if (*i % 2 == 0)
		{
			even.push_back(*i);
		}
		else
		{
			odd.push_back(*i);
		}
	}

	cout << "even: " << endl;
	for (auto i = even.cbegin(); i != even.cend(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	cout << "odd: " << endl;
	for (auto i = odd.cbegin(); i != odd.cend(); ++i)
	{
		cout << *i << " ";
	}	
	cout << endl;

	return 0;
}