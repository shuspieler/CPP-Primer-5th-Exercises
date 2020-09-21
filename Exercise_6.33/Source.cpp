#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int print_vector(vector<char>::iterator bg, vector<char>::iterator ed)
{
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