#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::count_if;
using std::bind;
using std::placeholders::_1;

string make_plural(size_t ctr, const string& word, const string& ending)
{
	return (ctr > 1) ? word + ending : word;
}

bool check_size(const string& s, string::size_type sz)
{
	return s.size() >= sz;
}

void biggies(vector<string>& words, vector<string>::size_type sz)
{
	auto count = count_if(words.cbegin(), words.cend(), bind(check_size, _1, sz));
	cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
}

int main()
{
	vector<string> vs = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	biggies(vs, 6);
	return 0;
}
