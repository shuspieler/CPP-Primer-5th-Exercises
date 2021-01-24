#include<iostream>
#include<memory>
#include<set>
#include<vector>
#include<string>

using std::count;
using std::vector;
using std::string;
using std::shared_ptr;
using std::set;

class QueryResult {
	friend std::ostream& print(std::ostream& os, const QueryResult& qr);
public:
	typedef vector<string>::size_type line_no_type;
	QueryResult(const string &wd, line_no_type t, shared_ptr<set<line_no_type>> lns, shared_ptr<vector<string>> lt):word(wd), total(t), line_numbers(lns), line_text(lt){}

private:
	string word;
	line_no_type total;
	shared_ptr<set<line_no_type>> line_numbers;
	shared_ptr<vector<string>> line_text;
};

std::ostream& print(std::ostream& os, const QueryResult& qr);