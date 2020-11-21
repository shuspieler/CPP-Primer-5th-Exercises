#include<iostream>

class NoDefault
{
public:
	NoDefault(int i) : var(i) {}
private:
	int var;
};

class C
{
public:
	C() : ND(127) {}
private:
	NoDefault ND;
};

int main()
{
	C tmp;
	return 0;
}

/*
#include<iostream>

class NoDefault
{
	NoDefault(int i){}
};

class C
{
	C():ND(127){}
	NoDefault ND;
};

int main()
{
	C tmp;
	return 0;
}
*/