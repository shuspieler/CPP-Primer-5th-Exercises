//Reference: https://github.com/jaege/Cpp-Primer-5th-Exercises/blob/master/ch12/12.28.cpp
#include<vector>
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
#include<set>
#include<map>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::map;
using std::set;

typedef vector<string>::size_type sz_type;

void runQueries(ifstream& infile);

string make_plural(int cnt, const string& s, const string& postfix = "s")
{
	return cnt > 1 ? s + postfix : s;
}

int main()
{
	cout << "Enter the file name to look up: ";
	string filename;
	cin >> filename;
	ifstream in(filename);
	if (!in.is_open())
	{
		std::cerr << "Cannot open file: " << filename << endl;
		return -1;
	}
	runQueries(in);
	return 0;
}

void init_text(ifstream& infile, vector<string>& text, map<string, set<sz_type>>& ln_maps);

void runQueries(ifstream& infile)
{
	vector<string> text;
	map<string, set<sz_type>> ln_maps;
	init_text(infile, text, ln_maps);
	while (true)
	{
		cout << "Enter word to look for, or 'q' to exit: ";
		string s;
		if (!(cin >> s) || s == "q")
		{
			break;
		}
		auto it = ln_maps.find(s);
		if (it == ln_maps.end())
		{
			cout << "\"" << s << "\" occurs 0 times. \n" << endl;
			continue;
		}
		sz_type total = 0;
		for (const auto& ln : it->second)
		{
			std::istringstream iss(text[ln]);
			for (string wd; iss >> wd;)
			{
				if (wd == s)
				{
					++total;
				}
			}
		}
		cout << "\"" << s << "\" occurs " << total << " " << make_plural(total, "time") << ":\n";
		for (const auto& ln : it->second)
		{
			cout << "(line " << ln + 1 << ") " << text[ln] << endl;
		}
		cout << endl;
	}
}

void init_text(ifstream& infile, vector<string>& text, map<string, set<sz_type>>& ln_maps)
{
	sz_type ln = 0;
	for (string line; std::getline(infile, line); text.push_back(line), ++ln)
	{
		std::istringstream iss(line);
		for(string word; iss>>word; ln_maps[word].insert(ln)){}
	}
}