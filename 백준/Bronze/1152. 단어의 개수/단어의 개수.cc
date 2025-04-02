#include<iostream>
#include<string>

using namespace std;

int main()
{
	int cnt = 1;
	string str;

	getline(cin, str);

	if (str[0] == ' ' && str.size() == 1)
	{
		cout << 0;
		return 0;
	}
	else
	{
		for (int i = 1; i < str.size() - 1; i++)
		{
			if (str[i] == ' ')
				cnt++;
		}
	}

	cout << cnt;
}