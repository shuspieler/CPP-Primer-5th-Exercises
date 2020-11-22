#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

std::istream & func(std::istream& i)
{
	string tmp;
	while (i >> tmp)
	{
		cout << tmp << endl;
	}
	cout<< "old rdstate: " << i.rdstate() << endl;;
	i.clear();
	return i;
}

int main()
{
	std::istream& is = func(cin);
	cout << "new rdstate: " << is.rdstate() << endl;
	return 0;
}