#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	int cnt = 0;
	while (true)
	{
		string str;
		cin >> str;

		if (str == "0")
			break;

		cnt++;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '1')
				cnt += 3;
			else if (str[i] == '0')
				cnt += 5;
			else
				cnt += 4;
		}

		cout << cnt << '\n';
		cnt = 0;
	}
}
