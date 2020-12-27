#include<iostream>
#include<list>
#include<vector>
#include<string>

using std::list;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	list<char*> lc{"V", "S", "T"};//error???
	vector<string> vs;
	vs.assign(lc.begin(), lc.end());
	return 0;
}