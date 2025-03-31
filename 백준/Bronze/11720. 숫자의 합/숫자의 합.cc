#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;
	int result = 0;
	string str;

	cin >> a;
	cin >> str;
	
	for (int i = 0; i < str.size(); i++)
	{
		char c = '0';
		int num = str[i] - c;
		result += num;
	}

	cout << result;
}