#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>


int main()
{
	std::ifstream in("in.txt");
	std::vector<std::string> v;
	std::string line;
	while (getline(in, line))
	{
		v.push_back(line);
	}
	for (std::string i : v)
	{
		std::istringstream j(i);
		std::string word;
		while (j >> word)
		{
			std::cout << word << std::endl;
		}
	}
	return 0;
}