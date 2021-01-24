#include"Header.h"
#include<fstream>

using std::cin;
using std::ifstream;
using std::getline;

StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end()
{
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}


int main()
{
	StrBlob texts;
	string tmp;
	ifstream in("inputs.txt");
	while (getline(in, tmp))
	{
		texts.push_back(tmp);
	}

	StrBlobPtr p = texts.begin();

	for (StrBlob::size_type pos = 0; pos != texts.size(); ++pos, p.incr())
		std::cout << pos + 1 << ":\t" << p.deref() << std::endl;

	/*for (StrBlobPtr pbeg(tests.begin()), pend(tests.end()); pbeg != pend; pbeg.incr())
	{
		cout << pbeg.deref() << endl;
	}*/

	return 0;
}
