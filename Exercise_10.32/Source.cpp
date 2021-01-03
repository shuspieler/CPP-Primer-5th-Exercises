#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<numeric>
#include"../include/Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::sort;
using std::istream_iterator;
using std::ostream_iterator;
using std::find_if;
using std::accumulate;

int main()
{
	istream_iterator<Sales_item> in_iter(cin), in_eof;
	vector<Sales_item> vS;

	while (in_iter != in_eof)
	{
		vS.push_back(*in_iter++);
	}
	sort(vS.begin(), vS.end(), compareIsbn);
	for (auto i = vS.cbegin(), j = vS.cbegin(); i != vS.cend(); i = j)
	{
		j = find_if(i, vS.cend(), [i](const Sales_item& item) {return item.isbn() != i->isbn(); });
		cout << accumulate(i, j, Sales_item(i->isbn())) << endl;
	}

	return 0;
}