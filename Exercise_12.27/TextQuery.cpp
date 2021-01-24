#include<sstream>
#include"TextQuery.h"
#include"QueryResult.h"


TextQuery::TextQuery(std::ifstream& in) :text(std::make_shared<vector<string>>()), lines() {
	line_no_type ln = 0;
	for (string line; std::getline(in, line); text->push_back(line), ++ln)
	{
		std::istringstream iss(line);
		for (string word; iss >> word;)
		{
			if (lines.find(word) == lines.end())
			{
				lines.insert({ word, std::make_shared<set<line_no_type>>() });
			}
			lines.at(word)->insert(ln);
		}
	}
}

QueryResult TextQuery::query(const string& word) const
{
	auto it = lines.find(word);
	if (it == lines.end())
	{
		return QueryResult(word);
	}
	line_no_type total = 0;
	for (const auto& ln : *(it->second))
	{
		std::istringstream iss((*text)[ln]);
		for (string wd; iss >> wd; )
		{
			if (wd == word)
			{
				++total;
			}
		}
	}
	return QueryResult(word, total, it->second, text);
}