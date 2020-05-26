#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int Exercise_1_11()
{
	int a, b;
	cout << "Enter two numbers" << endl;
	cin >> a >> b;
	int var = a;
	if (a > b)
	{
		--var;
		while (var > b)
		{
			cout << var << endl;
			--var;
		}
		return 0;
	}
	else if (a < b)
	{
		++var;
		while (var < b)
		{
			cout << var << endl;
			++var;
		}
		return 0;
	}
	else
		return 0;
}

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
int Exercise_1_20()
{
	Sales_data book;
	double price;
	while (cin >> book.bookNo >> book.units_sold >> price)
	{
		book.revenue = book.units_sold * price;
		cout << book.bookNo << " " << book.units_sold << " " << book.revenue << endl;
	}
	return 0;
}

int Exercise_1_21()
{
	Sales_data item1, item2;
	double price;

	std::cin >> item1.bookNo >> item1.units_sold >> price;
	item1.revenue = item1.units_sold * price;

	std::cin >> item2.bookNo >> item2.units_sold >> price;
	item2.revenue = item2.units_sold * price;

	cout << item1.bookNo << " " << item1.units_sold + item2.units_sold << " " <<
		item1.revenue + item2.revenue << endl;
	return 0;
}

int Exercise_1_22()
{
	Sales_data total, item;
	double price;

	if (cin >> total.bookNo >> total.units_sold >> price)
	{
		total.revenue = total.units_sold * price;
		while (cin >> item.bookNo >> item.units_sold >> price)
		{
			item.revenue = item.units_sold * price;
			total.units_sold += item.units_sold;
			total.revenue += item.revenue;
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}
	return 0;
}


int main()
{
	//Exercise_1_11();
	//Exercise_1_20();
	//Exercise_1_21();
	//Exercise_1_22();

	return 0;
}