#include<string>
#include<iostream>
#include<algorithm>
#include<vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::partition;

bool m5(string& s)
{
	return s.size() >= 5;
}

int main()
{
	vector<string> vs = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };

	cout << "Original: ";
	for (const string& i : vs)
	{
		cout << i << " ";
	}
	cout << endl;

	vector<string>::iterator iter = partition(vs.begin(), vs.end(), m5);

	cout << "After partition: ";
		for (const string& i : vs)
	{
		cout << i << " ";
	}
	cout << endl;

	cout << "More than 5 characters: ";
	for (auto i = vs.begin(); i<iter; ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	return 0;
}
