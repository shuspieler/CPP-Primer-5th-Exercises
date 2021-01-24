#include<sstream>
#include"TextQuery.h"
#include"QueryResult.h"
#include"StrBlob.h"
#include"StrBlobPtr.h"

using std::set;

TextQuery::TextQuery(std::ifstream& in) :text(new StrBlob), word_map() {
	for (string line; std::getline(in, line); text->push_back(line))
	{
		std::istringstream iss(line);
		for (string word; iss >> word;)
		{
			auto& lns = word_map[word];
			if (!lns)
			{
				lns.reset(new set<line_no_type>);
			}
			lns->insert(text->size());
		}
	}
}

QueryResult TextQuery::query(const string& word) const {
	static std::shared_ptr<set<line_no_type>> nodata(new set<line_no_type>);
	auto it = word_map.find(word);
	if (it == word_map.end())
	{
		return QueryResult(word, 0, nodata, text);
	}
	line_no_type total = 0;
	for (const auto& ln : *(it->second))
	{
		std::istringstream iss(StrBlobPtr(*text, ln).deref());
		for (string wd; iss >> wd;)
		{
			if (wd == word)
			{
				++total;
			}
		}
	}
	return QueryResult(word, total, it->second, text);
}