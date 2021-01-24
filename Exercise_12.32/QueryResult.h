#include<iostream>
#include<memory>
#include<set>
#include<vector>
#include<string>
#include"StrBlob.h"

using std::set;

class QueryResult {
	friend std::ostream& print(std::ostream& os, const QueryResult& pr);
public:
	typedef StrBlob::size_type line_no_type;
	
	QueryResult(const string &wd, line_no_type t, std::shared_ptr<set<line_no_type>> lns, std::shared_ptr<StrBlob> lt): word(wd), total(t), line_numbers(lns), line_text(lt){}

private:
	string word;
	line_no_type total;
	std::shared_ptr<set<line_no_type>> line_numbers;
	std::shared_ptr<StrBlob> line_text;
};

std::ostream& print(std::ostream& os, const QueryResult& qr);