#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(int i)
{
	cout << "void print(int i): " << i << endl;
}

void print(const char* cp)
{
	cout << "void print(const char* cp): ";
	if (cp)
	{
		while (*cp)
		{
			cout << +cp++ << " ";
		}
	}
	cout << endl;
}

void print(const int* beg, const int* end)
{
	cout << "void print(const int* beg, const int* end): ";
	while (beg != end)
	{
		cout << *beg++ << " ";
	}
	cout << endl;
}

void print(const int ia[], size_t size)
{
	cout << "void print(const int ia[], size_t size): ";
	for (size_t i = 0; i != size; ++i)
	{
		cout << ia[i] << " ";
	}
	cout << endl;
}

void print(int(&arr)[2])
{
	cout << "void print(int(&arr)[2]): ";
	for (int elem : arr)
	{
		cout << elem << " ";
	}
}

int main()
{
	int i = 0, j[2] = { 0, 1 };
	
	print(i);
	print(begin(j), end(j));
	print(j, end(j) - begin(j));
	print(j);
	return 0;

}