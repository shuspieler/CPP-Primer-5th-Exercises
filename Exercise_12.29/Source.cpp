#include<iostream>
#include<fstream>
#include"../Exercise_12.27/TextQuery.h"
#include"../Exercise_12.27/QueryResult.h"

void runQueries(std::ifstream& infile)
{
	TextQuery tq(infile);
	do
	{
		cout << "Enter word to look for, or 'q' to exit: ";
		string s;
		if (!(std::cin >> s) || s == "q")
		{
			break;
		}
		print(cout, tq.query(s)) << endl;
	} while (true);
}

int main()
{
	cout << "Enter the file name to look up: ";
	string filename;
	std::cin >> filename;
	std::ifstream in(filename);
	if (!in.is_open())
	{
		std::cerr << "Cannot open file: " << filename << endl;
		return -1;
	}
	runQueries(in);
	return 0;
}