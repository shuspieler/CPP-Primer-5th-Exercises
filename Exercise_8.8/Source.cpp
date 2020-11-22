#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

using std::cin;
using std::cout;
using std::endl;

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

int main(int argc, char** argv)
{

	Sales_data total;
	std::ifstream in(argv[1]);
	std::ofstream out(argv[2], std::ofstream::app);
	std::string line_01;

	if (getline(in, line_01))
	{
		std::stringstream sline_01(line_01);
		sline_01 >> total.bookNo >> total.units_sold >> total.revenue;

		Sales_data trans;
		std::string line;

		while (getline(in, line))
		{
			std::stringstream sline_02(line);
			sline_02 >> trans.bookNo >> trans.units_sold >> trans.revenue;

			if (total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else
			{
				cout << "bookNo: " << total.bookNo << " units_sold: " << total.units_sold << " revenue: " << total.revenue << endl;
				out << "bookNo: " << total.bookNo << " units_sold: " << total.units_sold << " revenue: " << total.revenue << endl;
				total = trans;
			}
		}
		cout << "bookNo: " << total.bookNo << " units_sold: " << total.units_sold << " revenue: " << total.revenue << endl;
		out << "bookNo: " << total.bookNo << " units_sold: " << total.units_sold << " revenue: " << total.revenue << endl;
	}

	else
	{
		std::cerr << "No data?! " << endl;
	}
	return 0;
}