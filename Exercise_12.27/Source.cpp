//reference: https://github.com/jaege/Cpp-Primer-5th-Exercises/tree/master/ch12/12.27
#include<iostream>
#include<fstream>
#include<string>
#include"TextQuery.h"
#include"QueryResult.h"

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

void runQueries(ifstream& infile)
{
	TextQuery tq(infile);
	while (true)
	{
		cout << "Enter word to look for, or 'q' to exit:";
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
	ifstream in(filename);
	if (!in.is_open())
	{
		std::cerr << "Cannot open file: " << filename << endl;
		return -1;
	}
	runQueries(in);
	return 0;
}