#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int input;
		string str;
		cin >> input;
		cin >> str;

		for (int j = 0; j < str.size(); j++)
		{
			for (int k = 0; k < input; k++)
				cout << str[j];
		}
		cout << endl;
	}
}