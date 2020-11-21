#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::istream;
using std::ostream;

struct Persion
{
	string name;
	string address;
	string return_name() //const
	{
		return name;
	}
	string return_address() //const
	{
		return address;
	}
};

istream& read(istream& is, Persion& item)
{
	is >> item.name >> item.address;
	return is;
}

ostream& print(ostream& os, const Persion& item)
{
	os << item.name << " " << item.address;
	return os;
}

int main()
{
	Persion p;
	read(cin, p);
	print(cout, p);
	return 0;
}