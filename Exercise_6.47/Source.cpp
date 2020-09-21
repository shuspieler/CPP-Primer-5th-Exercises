#include<iostream>
#include<vector>

//#define NDEBUG

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int print_vector(vector<char>::iterator bg, vector<char>::iterator ed)
{
#ifndef NDEBUG
	std::cerr << "bg" << (ed-bg) << endl;
	std::cout << "In function: " << __func__ << ", " << "Vector size: " << ed - bg << std::endl;
#endif
	if (bg != ed)
	{
		cout << *bg << " ";
		print_vector(++bg, ed);
	}
	return 0;
}

int main()
{
	vector<char> v_c = { 'a', 'b', 'c', '1', 'd' };
	print_vector(begin(v_c), end(v_c));
	return 0;
}