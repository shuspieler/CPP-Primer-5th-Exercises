#include<fstream>
#include"Header.h"

using std::ifstream;
using std::getline;

StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::begin() const
{
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}

StrBlobPtr StrBlob::end() const
{
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}

int main()
{
	return 0;
}
