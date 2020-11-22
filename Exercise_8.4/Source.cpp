#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using std::string;
using std::vector;

int main()
{
	std::ifstream in("in.txt");

	vector<string> content;
	string line;
	while (getline(in, line))
	{
		//std::cout << "read success" << std::endl;
		content.push_back(line);
	}
	for (auto i : content)
	{
		std::cout << i << std::endl; //gibberish has taken into account
	}

	std::ofstream out("out.txt");
	for (auto i : content)
	{
		out << i << std::endl;
	}
	in.close();
	out.close();

	return 0;
}