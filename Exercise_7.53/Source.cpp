#include<iostream>

class Debug
{
public:
	constexpr Debug(bool b = true): hw(b), io(b), other(b) {}
	constexpr Debug(bool h, bool i, bool o): hw(h), io(i), other(o) {}
	constexpr bool any() const // Add const (since C++14) https://github.com/jaege/Cpp-Primer-5th-Exercises/blob/master/ch7/7.53.cpp
	{
		return hw || io || other;
	}
	void set_io(bool b)
	{
		io = b;
	}
	void set_hw(bool b)
	{
		hw = b;
	}
	void set_other(bool b)
	{
		hw = b;
	}
private:
	bool hw;
	bool io;
	bool other;
};

int main() 
{
	constexpr Debug io_sub(false, true, false);
	if (io_sub.any())
	{
		std::cerr << "Print appropriate error message" << std::endl;
	}
	constexpr Debug prod(false);
	if (prod.any())
	{
		std::cerr << "Print an error message" << std::endl;
	}
	return 0;
}