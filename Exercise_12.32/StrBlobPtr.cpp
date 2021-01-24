#include"StrBlobPtr.h"
#include"StrBlob.h"
#include<stdexcept>

StrBlobPtr::StrBlobPtr(): wptr(), curr(0){}
StrBlobPtr::StrBlobPtr(StrBlob &sb, size_type pos):wptr(sb.data), curr(pos){}

std::shared_ptr<vector<string>> StrBlobPtr::check(size_type pos, const string& msg) const {
	auto ret = wptr.lock();
	if (!ret)
	{
		throw std::runtime_error("unbound StrBlobPtr");
	}
	if (pos >= ret->size())
	{
		throw std::out_of_range(msg);
	}
	return ret;
}

string& StrBlobPtr::deref() const {
	auto sp = check(curr, "deference past end of StrBlobPtr");
	return (*sp)[curr];
}

StrBlobPtr& StrBlobPtr::inc()
{
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}