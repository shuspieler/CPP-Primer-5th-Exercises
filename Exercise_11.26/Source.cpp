#include<iostream>
#include<map>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

int main()
{
	map<int, string> mis{ {1, "A"}, {4, "zZZ"} };;

	cout << mis[4] << endl;
	//return type of subscript: mapped_type
	return 0;
}