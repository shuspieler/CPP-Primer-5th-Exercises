#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::toupper;
//using std::getline;

int main()
{
	vector<string> temp;
	string s;
	while (cin >> s)
	{
		temp.push_back(s);
	}
	for (string &i : temp)
	{
		for (char &j : i)
		{
			j = toupper(j);
		}
	}
	for (decltype(temp.size()) k = 0; k < temp.size(); k++)
	{
		cout << temp[k] << " ";
		if (k != 0 && k % 7 == 0)
		{
			cout << endl;
		}
	}
	return 0;
}