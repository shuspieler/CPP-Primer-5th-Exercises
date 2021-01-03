#include<iostream>
#include<list>
#include<string>

using std::cout;
using std::endl;
using std::list;
using std::string;

void elimDups(list<string>& words)
{
	words.sort();
	words.unique();
}

int main()
{
	list<string> ls = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	for (string i : ls)
	{
		cout << i << " ";
	}
	cout << endl;
	elimDups(ls);
	for (string i : ls)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}