#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

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

int main()
{
	Persion p = {"a", "bcd"};
	cout << p.name << endl;
	cout << p.address << endl;
	return 0;
}