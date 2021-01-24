#include<iostream>
#include<string>
#include<memory>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::allocator;

int main()
{
	size_t n = 10;
	allocator<string> alloc;
	auto const p = alloc.allocate(n);
	string s;
	string* q = p;
	while (cin >> s && q != p + n)
	{
		alloc.construct(q++, s);
	}
	const size_t size = q - p;

	for (string* s = p; s < p + size; ++s)
	{
		cout << *s << " ";
	}

	while (q != p)
	{
		alloc.destroy(--q);
	}
	alloc.deallocate(p, n);
	return 0;
}