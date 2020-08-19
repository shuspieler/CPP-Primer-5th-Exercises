#include<iostream>
#include<string>
#include<cstring>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::strcmp;

int main()
{
	string s1;
	string s2;
	char ch1[140];
	char ch2[140];
	cin >> s1 >> s2;
	if (s1 > s2)
	{
		cout << "s1 > s2" << endl;
	}
	else if (s1 < s2)
	{
		cout << "s1 < s2" << endl;
	}
	else
	{
		cout << "s1 == s2" <<endl;
	}
	cin >> ch1 >> ch2;
	if (strcmp(ch1, ch2)>0)
	{
		cout << "ch1 > ch2" << endl;
	}
	else if (strcmp(ch1, ch2) < 0)
	{
		cout << "ch1 < ch2" << endl;
	}
	else
	{
		cout << "ch1 == ch2" << endl;
	}
	return 0;
}
