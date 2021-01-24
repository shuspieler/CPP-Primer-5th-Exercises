//Reference: https://github.com/jaege/Cpp-Primer-5th-Exercises/tree/master/ch12/12.32
#include<iostream>
#include<fstream>
#include"TextQuery.h"
#include"QueryResult.h"

void runQuries(std::ifstream& infile)
{
	TextQuery tq(infile);
	while (true)
	{
		std::cout << "Enter word to look for, or 'q' to exit: ";
		string s;
		if (!(std::cin >> s) || s == "q")
		{
			break;
		}
		print(std::cout, tq.query(s)) << std::endl;
	}
}

int main()
{
	std::cout << "Enter the file name to look up: ";
	string filename;
	std::cin >> filename;
	std::ifstream in(filename);
	if (!in.is_open())
	{
		std::cerr << " Cannot open file: " << filename << std::endl;
		return -1;
	}
	runQuries(in);
	return 0;
}