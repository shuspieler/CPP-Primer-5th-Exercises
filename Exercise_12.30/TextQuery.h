class QueryResult;

#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>

using std::vector;
using std::string;
using std::map;
using std::set;
using std::shared_ptr;

class TextQuery {
public:
	typedef vector<string>::size_type line_no_type;
	explicit TextQuery(std::ifstream& in);
	QueryResult query(const string& word) const;
private:
	shared_ptr<vector<string>> text;
	map<string, shared_ptr<set<line_no_type>>> word_map;
};