#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int string_compare_large()
{
	string string1, string2;
	cout << "Please enter two strings:\n";
	cin >> string1 >> string2;
	if (string1 > string2)
	{
		cout << string1 << " is larger than " << string2 << endl;
	}
	else if (string1 < string2)
	{
		cout << string1 << " is smaller than " << string2 << endl;
	}
	else
	{
		cout << string1 << " is equal to " << string2 << endl;
	}
	return 0;
}

int string_compare_size()
{
	string string1, string2;
	cout << "Please enter two strings:\n";
	cin >> string1 >> string2;
	if (string1.size() > string2.size())
	{
		cout << string1 << "\'s size is larger than " << string2 << "\'s" <<endl;
	}
	else if (string1.size() < string2.size())
	{
		cout << string1 << "\'s size is smaller than " << string2 <<"\'s"<< endl;
	}
	else
	{
		cout << string1 << "\'s size is equal to " << string2 << "\'s" << endl;
	}
	return 0;
}


int main()
{
	//string_compare_large();
	string_compare_size();
	return 0;
}