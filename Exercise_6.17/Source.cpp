#include<iostream>
#include<string>
#include<cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::isupper;
using std::tolower;


bool capital_check(const string& s)
{
	for (char c : s)
	{
		if (isupper(c))
		{
			return true;
		}
	}
	return false;
}

void string_to_lower(string& s)
{
	for (char &c : s)
	{
		if (isupper(c))
		{
			c = tolower(c);
		}
	}
}

int main()
{
	string tmp;
	//cin >> tmp;
	std::getline(cin, tmp);
	cout << "original string: " << tmp << endl;
	
	bool has_upper = false;
	has_upper = capital_check(tmp);
	if (has_upper)
	{
		cout << "String has captical letter(s)." << endl;
		string_to_lower(tmp);
		cout << "Captical letter(s) removed: " << tmp << endl;
	}
	else
	{
		cout << "String has no captical letter." << endl;
	}
	return 0;
}