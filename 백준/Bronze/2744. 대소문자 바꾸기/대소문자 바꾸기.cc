#include <iostream>
#include <string>
using namespace std;

int main()
{
	int k;
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		char ex;
		ex = str[i];
		k = ex;
		if (k >= 65 && k <= 90)
			str[i] = (char)tolower(str[i]);
		else if (k >= 97 && k <= 122)
			str[i] = (char)toupper(str[i]);

		cout << str[i];
	}
}