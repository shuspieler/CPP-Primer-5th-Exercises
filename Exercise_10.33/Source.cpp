#include<iostream>
#include<fstream>
#include<iterator>

using std::cout;
using std::endl;
using std::istream_iterator;
using std::ostream_iterator;
using std::ifstream;
using std::ofstream;

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		cout << "Argument error" << endl;
		return -1;
	}

	ifstream in(argv[1]);
	ofstream out_01(argv[2], ofstream::out);
	ofstream out_02(argv[3], ofstream::out);
	if (!in)
	{
		cout << "open files error. " << endl;
		return -2;
	}

	int tmp;
	while (in >> tmp)
	{
		if (tmp % 2 == 0)
		{
			out_02 << tmp << " ";
		}
		else
		{
			out_01 << tmp << " ";
		}
	}

	in.close();
	out_01.close();
	out_02.close();
	return 0;
}