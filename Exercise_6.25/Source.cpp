#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char* argv[])
{
	vector<string> tmp;
	tmp.push_back(argv[1]);
	tmp.push_back(argv[2]);
	
	for (auto i : tmp)
	{
		cout << i << " ";
	}
	return 0;
}