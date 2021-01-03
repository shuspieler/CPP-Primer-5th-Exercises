#include<iostream>
#include<vector>
#include<string>
#include<functional>
#include<algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::sort;
using std::unique;
using std::stable_sort;
using std::for_each;
using std::partition;
using std::bind;
using std::placeholders::_1;


void elimDumps(vector<string>& words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string& word, const string& ending)
{
	return (ctr > 1) ? word + ending : word;
}

bool check_size(const string& s, string::size_type sz)
{
	return s.size() < sz;
}

void biggies(vector<string>& words, vector<string>::size_type sz)
{
	elimDumps(words);
	auto wc = partition(words.begin(), words.end(), bind(check_size, _1, sz));
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
