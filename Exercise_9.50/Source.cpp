#include<iostream>
#include<string>
#include<vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
//using std::stoi;

int main()
{
	vector<string> vs_01 = { "3", "2", "14" };
	int sum_i = 0;
	for (vector<string>::iterator i = vs_01.begin(); i < vs_01.end(); i++)
	{
		sum_i += stoi(*i);
	}
	cout << "sum of vs_01 is: " << sum_i << endl;

	vector<string> vs_02 = { "3", "2", "14.1" };
	float sum_f = 0;
	for (vector<string>::iterator i = vs_02.begin(); i < vs_02.end(); i++)
	{
		sum_f += stof(*i);
	}
	cout << "sum of vs_02 is: " << sum_f << endl;
	return 0;
}