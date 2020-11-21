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
public:
	Sales_data(std::string s, unsigned cnt, double rev) : bookNo(s), units_sold(cnt), revenue(rev* cnt)
	{
		cout << "Sales_data(std::string s, unsigned cnt, double rev) : bookNo(s), units_sold(cnt), revenue(rev* cnt)" << endl;
	}
	Sales_data() : Sales_data("", 0, 0)
	{
		cout << "Sales_data() : Sales_data("", 0, 0)" << endl;
	}
	Sales_data(std::string s) : Sales_data(s, 0, 0)
	{
		cout << "Sales_data(std::string s) : Sales_data(s, 0, 0)" << endl;
	}
	Sales_data(std::istream& is): Sales_data()
	{
		read(is, *this);
		cout << "Sales_data(std::istream& is)" << endl;
	}

	std::string isbn() const
	{
		return bookNo;
	}

	Sales_data& combine(const Sales_data&);
	double avg_price() const;

	friend istream& read(istream& is, Sales_data& item);
	friend ostream& print(ostream& os, const Sales_data& item);

private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
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

inline double Sales_data::avg_price() const
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


int main()
{
	Sales_data next; 
	cout << "------------------------------------------------" << endl;
	cout << endl;

	Sales_data last("9-999-9999-9");  
	cout << "------------------------------------------------" << endl;
	cout << endl;

	Sales_data first_item(std::cin);
	cout << "------------------------------------------------" << endl;
	cout << endl;

	return 0;
}