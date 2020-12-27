#include<iostream>
#include<string>
#include<forward_list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::forward_list;

forward_list<string> fls_f(forward_list<string>, string, string);

int main()
{
	forward_list<string> fls = { "abc", "def", "xyz" };
	string str_01 = "abc";
	string str_02 = "xxx";
	string str_03 = "|C++ Primer 5th|";

	auto res_01 = fls_f(fls, str_01, str_03);
	for (auto i : res_01)
	{
		cout << i << " ";
	}
	cout << endl;

	auto res_02 = fls_f(fls, str_02, str_03);
	for (auto i : res_02)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}

forward_list<string> fls_f(forward_list<string> var_01, string var_02, string var_03)
{
	forward_list<string> tmp = var_01;
	forward_list<string>::iterator i = tmp.before_begin();
	forward_list<string>::iterator j = tmp.begin();
	for (; j != tmp.end(); ++i, ++j)
	{
		if (*j == var_02)
		{
			tmp.insert_after(j, var_03);
			return tmp;
		}
	}
	tmp.insert_after(i, var_03);
	return tmp;
}
