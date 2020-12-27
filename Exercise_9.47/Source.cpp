#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::endl;
using std::string;

int main()
{
	string alphabetic_character = "abcdefghijklnmopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string numeric_character = "0123456789";

	string i = "ab2c3d7R4E6";
	string::size_type pos = 0;

	while ((pos = i.find_first_of(alphabetic_character, pos)) != string::npos)
	{
		cout << "found character at index: " << pos << " element is " << i[pos] << endl;
		++pos;
	}

	pos = 0;
	while ((pos = i.find_first_of(numeric_character, pos)) != string::npos)
	{
		cout << "found character at index: " << pos << " element is " << i[pos] << endl;
		++pos;
	}

	cout << endl;

	pos = 0;
	while ((pos = i.find_first_not_of(numeric_character, pos)) != string::npos)
	{
		cout << "found character at index: " << pos << " element is " << i[pos] << endl;
		++pos;
	}

	pos = 0;
	while ((pos = i.find_first_not_of(alphabetic_character, pos)) != string::npos)
	{
		cout << "found character at index: " << pos << " element is " << i[pos] << endl;
		++pos;
	}
	return 0;
}