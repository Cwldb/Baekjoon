#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	string str;
	int a, cnt = 0;

	cin >> str;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		string str1;
		cin >> str1;

		if (str1 == str)
			cnt++;
	}

	cout << cnt;
}
