#include<iostream>
#include<string>
#include<deque>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::deque;

int main()
{
	string tmp_in;
	deque<string> tmp_out;
	
	while (cin >> tmp_in)
	{
		tmp_out.push_back(tmp_in);
	}

	for (deque<string>::iterator i = tmp_out.begin(); i < tmp_out.end(); i++)
	{
		cout << *i << endl;
	}

	return 0;
}