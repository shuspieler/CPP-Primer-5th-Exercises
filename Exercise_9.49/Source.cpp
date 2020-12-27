#include<iostream>
#include<fstream>
#include<string>

using std::ifstream;
using std::cout;
using std::endl;
using std::string;

int main()
{
	ifstream in;
	in.open("./in.txt");
	string tmp;
	string::size_type st = 0;
	string langest_no_asde;

	string asde("dfpg");

	if (!in.fail())
	{
		while (in >> tmp)
		{
			if (tmp.find_first_of(asde) == string::npos)
			{
				if (tmp.length() > st)
				{
					langest_no_asde = tmp;
					st = tmp.length();
				}
			}
		}
		cout << st << endl;
		cout << langest_no_asde << endl;
		in.close();
	}
	else
	{
		cout << "error while opening the file" << endl;
	}
	return 0;
}