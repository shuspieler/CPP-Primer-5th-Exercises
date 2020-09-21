#include<iostream>
#include<vector>

typedef int Func(int, int);
typedef int (*FuncP)(int, int);

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int int_templete(int, int);

int int_add(int a, int b)
{
	return (a + b);
}

int int_subtract(int a, int b)
{
	return(a - b);
}

int int_multiply(int a, int b)
{
	return (a * b);
}

int int_divide(int a, int b)
{
	return (a / b);
}

vector<decltype(int_templete) *> v_f_01{ int_add, int_subtract,int_multiply, int_divide };
vector<Func *> v_f_02{ int_add, int_subtract,int_multiply, int_divide };
vector<FuncP> v_f_03{ int_add, int_subtract,int_multiply, int_divide };

int main()
{
	int i = 5, j = 3;
	cout << "------<decltype(int_templete) *>------" << endl;
	cout << v_f_01[0](i, j) << endl;
	cout << v_f_01[1](i, j) << endl;
	cout << v_f_01[2](i, j) << endl;
	cout << v_f_01[3](i, j) << endl;
	cout << "\n";
	cout << "------<Func *>------" << endl;
	cout << v_f_02[0](i, j) << endl;
	cout << v_f_02[1](i, j) << endl;
	cout << v_f_02[2](i, j) << endl;
	cout << v_f_02[3](i, j) << endl;
	cout << "\n";
	cout << "------<FuncP>------" << endl;
	cout << v_f_03[0](i, j) << endl;
	cout << v_f_03[1](i, j) << endl;
	cout << v_f_03[2](i, j) << endl;
	cout << v_f_03[3](i, j) << endl;
	return 0;
}



