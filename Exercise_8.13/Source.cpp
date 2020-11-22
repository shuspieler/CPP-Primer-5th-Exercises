#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

int main()
{
	std::ifstream in("in.txt");
	string line, word;
	vector<PersonInfo> people;
	std::istringstream record;

	while (getline(in, line))
	{
		PersonInfo info;

		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
		{
			info.phones.push_back(word);
		}
		people.push_back(info);
	}

	for (const auto& entry : people)
	{
		std::ostringstream formatted, badNums;
		for (const auto& nums : entry.phones)
		{
			if (!valid(nums))
			{
				badNums << " " << nums;
			}
			else
			{
				formatted << " " << format(nums);
			}
		}
		if (badNums.str().empty())
		{
			os << entry.name << " " << formatted.str() << endl;
		}
		else
			std::cerr << "input error: " << entry.name << " invalid number(s) " << badNums.str() << endl;
	}
	return 0;
}
