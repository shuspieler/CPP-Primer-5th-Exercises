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
using std::getline;

int main()
{
	string temp;
	vector<string> v;
	while (getline(cin, temp))
	{
		v.push_back(temp);
	}
	for (vector<string>::iterator i = v.begin(); i != v.end() && (i->empty() == false); i++)
	{
		for (unsigned int j = 0; j< i->size(); j++)
		{
			(*i)[j] = toupper((*i)[j]);
		}
	}
	for (vector<string>::iterator k = v.begin(); k != v.end(); k++)
	{
		cout << *k<<endl;
	}
	return 0;
}
