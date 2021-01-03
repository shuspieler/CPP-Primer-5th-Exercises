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
using std::stable_sort;

bool isShorter(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}

void elimDups(vector<string>& words)
{
	sort(words.begin(), words.end());
	cout << "After sort: ";
	for (string i : words)
	{
		 cout << i << " ";
	}
	cout << endl;

	auto end_unique = unique(words.begin(), words.end());
	cout << "After unique: ";
	for (string i : words)
	{
		cout << i << " ";
	}
	cout << endl;

	words.erase(end_unique, words.end());
	cout << "After erase: ";
	for (string i : words)
	{
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	vector<string> vs = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };

	cout << "Original: ";
	for (const auto& s : vs)
	{
		 cout << s << " ";
	}
	cout << endl;

	elimDups(vs);

	stable_sort(vs.begin(), vs.end(), isShorter);
	cout << "After stable_sort: ";
	for (const auto& s : vs)
	{
		 cout << s << " ";
	}
	cout << endl;

	return 0;
}