#include<iostream>
#include<string>
#include<vector>
#include<memory>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::initializer_list;
using std::shared_ptr;
using std::make_shared;
using std::out_of_range;

class StrBlob {
public:
	typedef std::vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string& t) { data->push_back(t); }
	void pop_back();
	string& front();
	const string& front()const;
	string& back();
	const string& back()const;

private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string& msg) const;
};

StrBlob::StrBlob(): data(make_shared<vector<string>>()){}
StrBlob::StrBlob(initializer_list<string> il): data(make_shared<vector<string>>(il)){}

void StrBlob::check(size_type i, const string& msg)const
{
	if (i >= data->size())
		throw out_of_range(msg);
}

string& StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}

const string& StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
}

string& StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}

const string& StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

int main()
{

	return 0;
}
