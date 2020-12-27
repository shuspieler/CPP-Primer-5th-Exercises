#include<iostream>
#include<string>
#include<list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

int main()
{
	string tmp_in;
	list<string> tmp_out;

	while (cin >> tmp_in)
	{
		tmp_out.push_back(tmp_in);
	}

	for (list<string>::iterator i = tmp_out.begin(); i != tmp_out.end(); i++)
	{
		cout << *i << endl;
	}

	return 0;
}