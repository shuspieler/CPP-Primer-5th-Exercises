#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

struct Sales_data
{
	Sales_data() = default;
	Sales_data(const string& s) : bookNo(s) {}
	Sales_data(const string& s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p* n) {}
	Sales_data(istream&);

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	std::string isbn() const
	{
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
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
	Sales_data total(cin);
	if (cin)
	{
		Sales_data trans(cin);
		while (cin)
		{
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(cout, total);
				cout << "\n";
				total = trans;
			}
			Sales_data tmp(cin);
			trans = tmp;
		}
		print(cout, total) << endl;
	}
	else
	{
		std::cerr << "No data!" << endl;
		return -1;
	}
	return 0;
}