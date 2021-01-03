#include<iostream>
#include<vector>
#include<string>
#include<iterator>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::istream_iterator;

int main()
{
	istream_iterator<string> iis(cin), eof;
	vector<string> vec(iis, eof);
	for (string i : vec)
	{
		cout << i << endl;
	}
	return 0;
}