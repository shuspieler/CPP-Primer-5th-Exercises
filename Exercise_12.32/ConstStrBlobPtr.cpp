#include"ConstStrBlobPtr.h"
#include"StrBlob.h"
#include<stdexcept>

ConstStrBlobPtr::ConstStrBlobPtr(): wptr(), curr(0){}
ConstStrBlobPtr::ConstStrBlobPtr(const StrBlob& sb, size_type pos) : wptr(sb.data), curr(pos) {}

std::shared_ptr<vector<string>> ConstStrBlobPtr::check(size_type pos, const string& msg) const
{
	auto ret = wptr.lock();
	if (!ret)
	{
		throw std::runtime_error("unbound ConstStrBlobPtr");
	}
	if (pos >= ret->size())
	{
		throw std::out_of_range(msg);
	}
	return ret;
}

const string& ConstStrBlobPtr::deref() const
{
	auto sp = check(curr, "deference past end of ConstStrBlobPtr");
	return (*sp)[curr];
}

ConstStrBlobPtr& ConstStrBlobPtr::inc()
{
	check(curr, "increment past end of ConstStrBlobPtr");
	++curr;
	return *this;
}