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
	friend istream& read(istream& is, Persion& item);
	friend ostream& print(ostream& os, const Persion& item);

private:
	string name;
	string address;

public:
	Persion() = default;
	Persion(const string& n) : name(n) {}
	Persion(const string& n, const string& adr) : name(n), address(adr) {}
	Persion(istream&);

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

Persion::Persion(istream& is)
{
	read(is, *this);
}

int main()
{
	Persion p_inits_01;
	print(cout, p_inits_01);
	cout << "\n";

	Persion p_inits_02("emmm");
	print(cout, p_inits_02);
	cout << "\n";

	Persion p_inits_03("zzz", "road");
	print(cout, p_inits_03);
	cout << "\n";

	Persion p_inits_04(cin);
	print(cout, p_inits_04);
	cout << "\n";

}