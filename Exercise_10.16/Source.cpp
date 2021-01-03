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
using std::find_if;
using std::for_each;

bool isShorter(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}

void elimDumps(vector<string>& words)
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

string make_plural(size_t ctr, const string& word, const string& ending)
{
	return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string>& words, vector<string>::size_type sz)
{
	elimDumps(words);
	stable_sort(words.begin(), words.end(), [](const string& a, const string& b) {return a.size() < b.size(); });
	auto wc = find_if(words.begin(), words.end(), [sz](const string& a) {return a.size() >= sz; });
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
	for_each(wc, words.end(), [](const string& s) {cout << s << " "; });
	cout << endl;
}

int main()
{
	vector<string> vs = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	biggies(vs, 5);
	return 0;
}
