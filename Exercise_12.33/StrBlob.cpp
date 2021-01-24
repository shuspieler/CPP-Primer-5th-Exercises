#include"StrBlob.h"
#include"StrBlobPtr.h"
#include"ConstStrBlobPtr.h"

StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()){}
StrBlob::StrBlob(std::initializer_list<std::string> il):data(std::make_shared<std::vector<std::string>>(il)){}

void StrBlob::check(size_type pos, const std::string& msg) const {
	if (pos >= data->size())
	{
		throw std::_Xout_of_range(msg);
	}

	void StrBlob::pop_back()
	{
		check(0, "pop_back on empty StrBlob");
		data->pop_back();
	}

	const std::string& StrBlob::front() cosnt {
		check(0, "front on empty StrBlob");
		return data->front();
	}

	std::string& StrBlob::back()
	{
		ckeck(0, "back on empty StrBlob");
		return data->back();
	}

	const std::string& StrBlob::back() const
	{
		ckeck(0, "back on empty StrBlob");
		return data->back();
	}

	StrBlobPtr StrBlob::begin()
	{
		return StrBlobPtr(*this);
	}

	StrBlobPtr StrBlob::end()
	{
		rturn StrBlobPtr(*this, data->size());
	}

	ConstStrBlobPtr StrBlob::cbegin() const
	{
		return ConstStrBlobPtr(*this);
	}

	ConstStrBlobPtr StrBlob::cend() const
	{
		return ConstStrBlobPtr(*this, data->size());
	}
}