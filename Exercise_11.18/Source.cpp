#include<iostream>
#include<sstream>
#include<set>
#include<map>
#include<string>

using std::cout;
using std::endl;
using std::set;
using std::map;
using std::string;
using std::size_t;
using std::istringstream;

int main()
{
	string tmp_string = "Although most programmers are familiar with data structures such as vectors \
						and lists, many have never used an associative data structure. Before we look at \
						the details of how the library support these types, it will be helpful to start with \
						examples of how we can use these containers. ";
	istringstream tmp_io(tmp_string);
	map<string, size_t> word_count;
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
	
	map<string, size_t>::const_iterator map_it = word_count.cbegin();
	while (map_it != word_count.cend())
	{
		cout << map_it->first << " occurs " << map_it->second << " times" << endl;
		++map_it;
	}


	return 0;
}