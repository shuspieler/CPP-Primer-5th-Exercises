#include<iostream>
#include<sstream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

std::istringstream& func(std::istream& i)
{
	string tmp;
	while (i >> tmp)
	{
		cout << tmp << endl;
	}
	cout << "old rdstate: " << i.rdstate() << endl;;
	i.clear();
	std::istringstream r(tmp);
	return r;
}

int main()
{
	std::istringstream& is = func(cin);
	cout << "new rdstate: " << is.rdstate() << endl;
	return 0;
}