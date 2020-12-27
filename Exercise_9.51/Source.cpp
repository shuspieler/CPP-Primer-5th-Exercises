#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class c_date
{
public:
	c_date() = default;
	c_date(string s)
	{
		year = stoi(string(s.end() - 4, s.end()));
		month = convert_month(s);

		string::size_type pos = 0;
		if ((pos = s.find(' ')) != string::npos)
		{
			day = stoi(string(s.begin() + (pos + 1), s.end()));
		}
		else if ((pos = s.find('/')) != string::npos)
		{
			day = stoi(string(s.begin() + (pos + 1), s.end()));
		}

	};
	void print()
	{
		cout << "Year: " << year << " Month: " << month << " Day: " << day << endl;
	}

private:
	unsigned int year = 1900;
	unsigned int month = 1;
	unsigned int day = 1;
	int convert_month(string s)
	{

		if (s.find("Jan") != string::npos)
		{
			month = 1;
		}
		else if (s.find("Feb") != string::npos)
		{
			month = 2;
		}
		else if (s.find("Mar") != string::npos)
		{
			month = 3;
		}
		else if (s.find("Apr") != string::npos)
		{
			month = 4;
		}
		else if (s.find("May") != string::npos)
		{
			month = 5;
		}
		else if (s.find("Jun") != string::npos)
		{
			month = 6;
		}
		else if (s.find("Jul") != string::npos)
		{
			month = 7;
		}
		else if (s.find("Aug") != string::npos)
		{
			month = 8;
		}
		else if (s.find("Sep") != string::npos)
		{
			month = 9;
		}
		else if (s.find("Oct") != string::npos)
		{
			month = 10;
		}
		else if (s.find("Nov") != string::npos)
		{
			month = 11;
		}
		else if (s.find("Dec") != string::npos)
		{
			month = 12;
		}
		else
		{
			month = stoi(s);
		}
		return month;
	}

};

int main()
{
	string date_01 = "December 27, 2020";
	string date_02 = "12/27/2020";
	string date_03 = "Dec 27, 2020";

	c_date().print();
	c_date(date_01).print();
	c_date(date_02).print();
	c_date(date_03).print();

	return 0;
}

