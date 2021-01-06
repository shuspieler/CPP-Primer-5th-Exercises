#include<iostream>
#include<sstream>
#include<set>
#include<map>
#include<unordered_map>
#include<string>
#include<fstream>


using std::cout;
using std::endl;
using std::set;
using std::map;
using std::unordered_map;
using std::string;
using std::size_t;
using std::ifstream;
using std::ofstream;
using std::istringstream;
using std::getline;
using std::runtime_error;


unordered_map<string, string> buildMap(ifstream& map_file)
{
	unordered_map<string, string> trans_map;
	string key;
	string value;
	while (map_file >> key && getline(map_file, value))
	{
		if (value.size() > 1)
		{
			trans_map[key] = value.substr(1);
		}
		else
		{
			throw runtime_error("no rule for " + key);
		}
	}
	return trans_map;
}

const string& transform(const string& s, const unordered_map<string, string>& m)
{
	auto map_it = m.find(s);
	if (map_it != m.cend())
	{
		return map_it->second;
	}
	else
	{
		return s;
	}
}

void word_transform(ifstream& map_file, ifstream& input)
{
	auto trans_map = buildMap(map_file);
	string text;
	while (getline(input, text))
	{
		istringstream stream(text);
		string word;
		bool firstword = true;
		while (stream >> word)
		{
			if (firstword)
			{
				firstword = false;
			}
			else
			{
				cout << " ";
			}
			cout << transform(word, trans_map);
		}
		cout << endl;
	}
}

int main()
{
	string tmp_string = "Although most programmers are familiar with data structures such as vectors \
						and lists, many have never used an associative data structure. Before we look at \
						the details of how the library support these types, it will be helpful to start with \
						examples of how we can use these containers. ";
	istringstream tmp_io(tmp_string);
	unordered_map<string, size_t> word_count;
	set<string> exclude = { "The", "But", "And", "Or", "An", "A",
							"the", "but", "and", "or", "an", "a" };
	string word;
	while (tmp_io >> word)
	{
		if (exclude.find(word) == exclude.end())
		{
			++word_count[word];
		}
	}
	for (const auto& w : word_count)
	{
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
	}

	cout << "------" << endl;

	ifstream map("map.txt");
	ifstream in("in.txt");
	word_transform(map, in);
	return 0;
}