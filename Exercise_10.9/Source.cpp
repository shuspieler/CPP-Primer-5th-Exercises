#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::sort;
using std::unique;

void elimDups(vector<string>& words)
{
	sort(words.begin(), words.end());
	for (string i : words)
	{
		cout << i << " ";
	}
	cout << endl;
	auto end_unique = unique(words.begin(), words.end());
	for (string i : words)
	{
		cout << i << " ";
	}
	cout << endl;
	words.erase(end_unique, words.end());
	for (string i : words)
	{
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	vector<string> vs = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	elimDups(vs);
	return 0;
}