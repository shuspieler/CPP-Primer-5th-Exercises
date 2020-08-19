#include<iostream>
#include<string>
#include<vector>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

int main()
{
	int ch1[] = { 1,2,3,4,5 };
	int ch2[6];
	vector<int> v(begin(ch1), end(ch1));
	for (decltype(v.size()) i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
		ch2[i] = v[i];
	}
	
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << ch2[i] << " ";
	}
	return 0;
}