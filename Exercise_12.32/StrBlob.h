class StrBlobPtr;
class ConstStrBlobPtr;

#include<vector>
#include<string>
#include<initializer_list>
#include<memory>

using std::string;
using std::vector;

class StrBlob {
	friend class StrBlobPtr;
	friend class ConstStrBlobPtr;
public:
	typedef vector<string>::size_type size_type;

	StrBlob();
	StrBlob(std::initializer_list<string> il);

	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	void push_back(const string& s);
	void pop_back();

	string& front();
	const string& front() const;
	string& back();
	const string& back() const;

	StrBlobPtr begin();
	StrBlobPtr end();

	ConstStrBlobPtr cbegin() const;
	ConstStrBlobPtr cend() const;

private:
	std::shared_ptr<vector<string>> data;
	void check(size_type pos, const string& msg) const;
};

inline void StrBlob::push_back(const string& s)
{
	data->push_back(s);
}