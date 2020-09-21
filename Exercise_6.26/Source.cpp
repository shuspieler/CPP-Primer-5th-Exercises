#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char** argv)
{
	for (int i = 0; i <= argc; ++i)
	{
		cout << argv[i] << " ";
	}
	return 0;
}