#include <iostream>
#include <string>

using namespace std;

int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
	{
		pos++;
		k++;
		if (k == 3) {
			return pos;
		}
	}
	return - 1;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
	{
		s.replace(pos, 1, "**");
		pos += 2;
	}
	return s;
}

int main()
{
	string str;

	cout << "Enter string:" << endl;

	getline(cin, str);

	int s = Count(str);

	cout << "third coma index is " << s << endl;

	string dest = Change(str);

	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	
	return 0;
}