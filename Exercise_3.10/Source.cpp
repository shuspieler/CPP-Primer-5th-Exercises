#include<iostream>
#include<string>
#include<cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string i;
	std::getline(cin, i);
	cout << "Original: " << i << endl;
	string j;
	for (auto k : i)
	{
		if (std::isalpha(k))
			j += k;
	}
	cout << "Punctuation removed: " << j << endl;
	return 0;
}