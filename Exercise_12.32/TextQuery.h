class QueryResult;

#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
#include"StrBlob.h"

using std::set;

class TextQuery {
public:
	typedef StrBlob::size_type line_no_type;
	explicit TextQuery(std::ifstream& in);
	QueryResult query(const string& word) const;
private:
	std::shared_ptr<StrBlob> text;
	std::map<string, std::shared_ptr<set<line_no_type>>> word_map;
};