#include<iostream>
#include<fstream>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<iterator>

using std::cout;
using std::endl;
using std::string;
using std::map;
using std::set;
using std::ifstream;
using std::size_t;
using std::vector;
using std::istream_iterator;

string trimStr(string s)
{
	constexpr char punctuations[] = { "\"'`:*-_;,.?!()[]{}" };
	for (char& c : s)
	{
		if (c >= 'A' && c <= 'Z')
		{
			c -= ('A' - 'a');
		}
		size_t bg = s.find_first_not_of(punctuations);
		if (bg == string::npos)
		{
			return "";
		}
		size_t ed = s.find_last_not_of(punctuations);
		return s.substr(bg, ed - bg + 1);
	}
}

map<string, size_t> count_words(vector<string> &words)
{
	map<string, size_t> counts;
	for (const auto& w : words)
	{
		++counts[trimStr(w)];
	}
	return counts;
}

int main()
{
	ifstream in("in.txt");
	istream_iterator<string> i_iter(in), eof;
	vector<string> words(i_iter, eof);
	auto counts = count_words(words);
	for (const auto& w : counts)
	{
		cout << "\"" << w.first << "\" occurs " << w.second << (w.second > 1 ? " times" : " time.") << endl;
	}
	return 0;
}

//Reference: https://github.com/jaege/Cpp-Primer-5th-Exercises/blob/master/ch11/11.4.cpp
