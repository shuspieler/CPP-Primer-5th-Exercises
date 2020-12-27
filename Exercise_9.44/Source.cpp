#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string fc(string s, string oldVal, string newVal)
{
	for (string::iterator i = s.begin(); i < s.end() - oldVal.length(); ++i)
	{
		string tmp(i, i + oldVal.length());
		if (tmp == oldVal)
		{
			s.replace(i - s.begin(), oldVal.length(), newVal);
		}
	}
	return s;
}

int main()
{
	string input = "abc tho def thru xyz.";
	cout << input << endl;
	cout << fc(input, "tho", "though") << endl;
	cout << fc(input, "thru", "though") << endl;
	return 0;
}