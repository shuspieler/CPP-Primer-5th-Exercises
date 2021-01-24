class StrBlob;

#include<vector>
#include<string>
#include<memory>

using std::vector;
using std::string;

class ConstStrBlobPtr
{
public:
	typedef vector<string>::size_type size_type;
	ConstStrBlobPtr();
	explicit ConstStrBlobPtr(const StrBlob& sb, size_type pos = 0);

	const string& deref() const;
	ConstStrBlobPtr& inc();

private:
	std::weak_ptr<vector<string>> wptr;
	size_type curr;

	std::shared_ptr<vector<string>> check(size_type pos, const string& msg) const;
};