#include<iostream>
#include<map>
#include<string>
#include<vector>

using std::cout;
using std::endl;
using std::map;
using std::vector;
using std::string;

int main()
{
	map<string, vector<int>> msvi;
	msvi["A"] = { 1, 2 };
	map<string, vector<int>>::iterator i = msvi.find("A");
	cout << i->second[0]<<" "<< i->second[1] << endl;
	return 0;
}