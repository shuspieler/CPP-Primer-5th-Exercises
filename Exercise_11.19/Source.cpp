#include<iostream>
#include<string>
#include<set>

using std::cout;
using std::endl;
using std::string;
using std::multiset;

struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	std::string isbn() const
	{
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs)
{
	return lhs.isbn() < rhs.isbn();
}

int main()
{
	multiset<Sales_data, bool (*) (const Sales_data& lhs, const Sales_data& rhs)> bookstore(compareIsbn);
	bookstore = { {"22541852", 2, 25}, {"25478425", 3, 27}, {"22541852", 3, 29} };

	//for (auto i : bookstore)
	//{
	//	cout << i.bookno << " " << i.units_sold << " " << i.revenue << endl;
	//}
	//cout << endl;

	multiset < Sales_data, bool(*)(const Sales_data&, const Sales_data&) > ::iterator it = bookstore.begin();
	cout << it->bookNo << " " << it->units_sold << " " << it->revenue << endl;

	return 0;
}