#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	do {
		string s1, s2;
		cout << "Please enter two strings: ";
		cin >> s1 >> s2;
		if (s1 > s2)
		{
			cout << "s1 is bigger than s2" << endl;
		}
		else if (s1 < s2)
		{
			cout << "s1 is smaller than s2" << endl;
		}
		else
		{
			cout << "s1 is equal to s2" << endl;
		}
	} while (cin);
	return 0;
}