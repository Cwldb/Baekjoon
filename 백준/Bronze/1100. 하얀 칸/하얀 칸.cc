#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() 
{
	int cnt = 0;

	for (int i = 1; i <= 8; i++)
	{
		string str;
		cin >> str;
		if (i % 2 == 1)
		{
			for (int j = 0; j < 8; j++)
			{
				if (j % 2 == 0)
					if (str[j] == 'F')
						cnt++;
			}
		}
		else
		{
			for (int j = 0; j < 8; j++)
			{
				if (j % 2 == 1)
					if (str[j] == 'F')
						cnt++;
			}
		}
	}

	cout << cnt;
}

