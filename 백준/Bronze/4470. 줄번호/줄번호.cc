#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int a;
	cin >> a;
	cin.ignore(1024, '\n');

	for (int i = 1; i <= a; i++)
	{
		string str;
		getline(cin, str);

		cout << i << ". " << str << endl;
	}
}