#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

class Sales_data
{
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

public:
	Sales_data() = default;
	Sales_data(const string& s) : bookNo(s) {}
	Sales_data(const string& s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p* n) {}
	Sales_data(istream&);

	std::string isbn() const
	{
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;

	friend istream& read(istream& is, Sales_data& item);
	friend ostream& print(ostream& os, const Sales_data& item);
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

double Sales_data::avg_price() const
{
	if (units_sold)
	{
		return revenue / units_sold;
	}
	else
	{
		return 0;
	}
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

istream& read(istream& is, Sales_data& item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream& print(ostream& os, const Sales_data& item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

Sales_data::Sales_data(istream& is)
{
	read(is, *this);
}

int main()
{
	Sales_data d_01;
	Sales_data d_02("abc");
	Sales_data d_03("emmm", 1, 3);
	Sales_data d_04(cin);

	print(cout, d_01);
	cout << "\n";
	print(cout, d_02);
	cout << "\n";
	print(cout, d_03);
	cout << "\n";
	print(cout, d_04);
	cout << "\n";

	return 0;
}