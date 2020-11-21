#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Book
{

public:
	Book(): isbn(""), name(""), author(), publish_year(0), publisher(""), version(0) {}
	Book(string i, string n, string au, unsigned y, const string &p = "", unsigned v = 1):
		isbn(i), name(n), author(au), publish_year(y), publisher(p), version(v){}
	Book(std::istream& is)
	{
		is >> isbn >> name >> author>> publish_year >> publisher >> version;
	}

private:
	string isbn;
	string name;
	string author;
	unsigned publish_year;
	string publisher;
	unsigned version;
};

int main()
{
	Book b1;
	Book b2("9787121200380", "CPP Primer 5th", "Stanley B. Lippman", 2015);
	Book b3(cin);

	return 0;
}