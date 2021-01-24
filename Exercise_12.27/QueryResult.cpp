#include"QueryResult.h"

string make_plural(int cnt, const string& s, const string& postfix = "s")
{
	return cnt > 1 ? s + postfix : s;
}

std::ostream& print(std::ostream& os, const QueryResult& qr)
{
	cout << "\"" << qr.word << "\" occurs " << qr.total << " " << make_plural(qr.total, "time") << ":\n";
	if (qr.total > 0)
	{
		for (const auto& ln : *qr.line_numbers)
		{
			cout << "(line " << ln + 1 << ") " << (*qr.line_text)[ln] << endl;
		}
	}
	return os;
}