#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<initializer_list>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::initializer_list;
using std::shared_ptr;
using std::weak_ptr;
using std::make_shared;
using std::out_of_range;
using std::runtime_error;

class StrBlobPtr;

class StrBlob {
	friend class StrBlobPtr;
public:
	typedef std::vector<string>::size_type size_type;

	StrBlob();
	StrBlob(initializer_list<string> il);

	size_type size() const
	{
		return data->size();
	}
	bool empty() const
	{
		return data->empty();
	}
	void push_back(const string& t)
	{
		data->push_back(t);
	}
	void pop_back();

	string& front();
	const string& front()const;
	string& back();
	const string& back()const;

	StrBlobPtr begin();
	StrBlobPtr end();

	StrBlobPtr begin() const;
	StrBlobPtr end() const;


private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string& msg) const;
};

StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}

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

class StrBlobPtr {
public:
	StrBlobPtr(): curr(0){}
	StrBlobPtr(StrBlob &a, size_t sz=0): wptr(a.data), curr(sz){}
	StrBlobPtr(const StrBlob& a, size_t sz = 0) : wptr(a.data), curr(sz) {}

	const string& deref() const
	{
		auto p = check(curr, "dereference past end");
		return (*p)[curr];
	}

	StrBlobPtr& incr()
	{
		check(curr, "increment past end of StrBlobPtr");
		++curr;
		return *this;
	}

private:
	shared_ptr<vector<string >> check(size_t, const string&) const;
	weak_ptr<vector<string>> wptr;
	size_t curr;
};

shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string& msg) const
{
	auto ret = wptr.lock();
	if (!ret)
	{
		throw runtime_error("unbound StrBlobPtr");
	}
	if (i >= ret->size())
	{
		throw out_of_range(msg);
	}
	return ret;
}