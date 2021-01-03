#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::sort;

struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	vector<Sales_data> vS = {
		{"1351861231", 2, 25},
		{"3574344354", 17, 29},
		{"3548556418", 3, 15}
	};

	cout << "Original: ";
	for (const auto v : vS)
	{
		cout << v.bookNo << " ";
	}
	cout << endl;

	sort(vS.begin(), vS.end(), [](const Sales_data& Sd1, const Sales_data& Sd2) {return Sd1.bookNo < Sd2.bookNo; });

	cout << "After sort: ";
	for (const auto v : vS)
	{
		cout << v.bookNo << " ";
	}
	cout << endl;

	return 0;
}


