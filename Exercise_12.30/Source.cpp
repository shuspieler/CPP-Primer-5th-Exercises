//Reference: https://github.com/jaege/Cpp-Primer-5th-Exercises/tree/master/ch12/12.30
#include<iostream>
#include<fstream>
#include"TextQuery.h"
#include"QueryResult.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void runQueries(std::ifstream& infile)
{
	TextQuery tq(infile);
	while (true)
	{
		cout << "Enter word to look for, or 'q' to exit: ";
		string s;
		if (!(cin >> s) || s == "q")
		{
			break;
		}
		print(cout, tq.query(s)) << endl;
	}
}

int main()
{
	cout << "Enter the file name to look up: ";
	string filename;
	cin >> filename;
	std::ifstream in(filename);
	if (!in.is_open())
	{
		std::cerr << "Cannot open file: " << filename << endl;
		return -1;
	}
	runQueries(in);
	return 0;
}