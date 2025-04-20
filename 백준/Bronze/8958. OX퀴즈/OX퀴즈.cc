#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int a, cnt = 0, plus = 0;
	string str;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'O')
			{
				plus++;
				cnt += plus;
			}
			else
			{
				plus = 0;
			}
		}

		cout << cnt << endl;
		cnt = 0;
		plus = 0;
	}
}