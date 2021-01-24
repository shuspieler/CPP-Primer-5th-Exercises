#include<iostream>
#include<memory>
#include<set>
#include<vector>
#include<string>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::set;
using std::shared_ptr;

class QueryResult
{
	friend std::ostream& print(std::ostream& os, const QueryResult& qr);
public:
	typedef vector<string>::size_type line_no_type;

	explicit QueryResult(const string& wd): word(wd), total(0), line_numbers(), line_text(){}
	QueryResult(const string &wd, line_no_type t, shared_ptr<const set<line_no_type>> lns, shared_ptr<const vector<string>> lt):word(wd), total(t), line_numbers(lns), line_text(lt){}

private:
	string word;
	line_no_type total;
	shared_ptr<const set<line_no_type>> line_numbers;
	shared_ptr<const vector<string>> line_text;
};

std::ostream& print(std::ostream& os, const QueryResult& qr);