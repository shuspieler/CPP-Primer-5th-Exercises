#include<iostream>

using std::cout;
using std::endl;

void print_01(const int ia[10])
{
	cout << "void print_01(const int ia[10]): " << endl;
	for (size_t i = 0; i != 10; ++i)
	{
		cout << ia[i] << endl;
	}
}

void print_02(const int *ia)
{
	cout << "void print_02(const int *ia): "<< endl;
	for (size_t i = 0; i != 10; ++i)
	{
		cout << ia[i] << endl;
	}
}

void print_03(const int (&ia) [10])
{
	cout << "void print_03(const int (&ia) [10]): " << endl;;
	for (size_t i = 0; i != 10; ++i)
	{
		cout << ia[i] << endl;
	}
}


int main()
{
	int tmp_01[10] = { 7, 6, 5, 4, 3, 2, 1, 0, 9 }; //end with 0
	print_01(tmp_01);
	print_02(tmp_01);
	print_03(tmp_01);
	
	int tmp_02[2] = { 1, 2 };
	int tmp_03[15] = { 11, 2, 3 };
	print_01(tmp_02);
	print_01(tmp_03);
	
	return 0;

}