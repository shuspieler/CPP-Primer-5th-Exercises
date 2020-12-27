#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

string fc(string name, string prefix, string suffix)
{
	string tmp(name);
	string tmp_prefix(prefix + ' ');
	tmp.insert(tmp.begin(), tmp_prefix.begin(), tmp_prefix.end());
	tmp.append(string(' ' + suffix));
	return tmp;
}

int main()
{
	string name("Passerby");
	string prefix_01 = "Mr.";
	string prefix_02 = "Ms.";
	string suffix_01 = "Jr.";
	string suffix_02 = "III";

	cout << fc(name, prefix_01, suffix_01) << endl;
	cout << fc(name, prefix_02, suffix_02) << endl;

	return 0;
}
