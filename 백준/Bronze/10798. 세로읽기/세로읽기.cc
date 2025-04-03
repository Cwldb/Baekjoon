#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<string> s(5);

	for (int i = 0; i < 5; i++)
		cin >> s[i];
	
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (s[j][i] != '\0')
				cout << s[j][i];
		}
	}
}