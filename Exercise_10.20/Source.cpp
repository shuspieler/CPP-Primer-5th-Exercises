#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::count_if;


string make_plural(size_t ctr, const string& word, const string& ending)
{
	return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string>& words, vector<string>::size_type sz)
{
	auto count = count_if(words.cbegin(), words.cend(), [sz](const string& a) {return a.size() >= sz; });
	cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
	cout << endl;
}

int main()
{
	vector<string> vs = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	biggies(vs, 6);
	return 0;
}
