#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int read_line()
{
	string line;
	while (getline(cin, line))
	{
		cout << line << endl;
	}
	return 0;
}

int read_word()
{
	string word;
	while (cin >> word)
	{
		cout << word << endl;
	}
	return 0;
}
int main()
{
	read_line();
	//read_word();
	return 0;
}