#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool isSame;

	while (true)
	{
		isSame = true;
		string str;
		cin >> str;
		if (str == "0") break;

		int length = str.length() / 2;
		for (int i = 0; i < length; i++)
		{
			if (str[i] != str[str.length() - 1 - i])
			{
				isSame = false;
			}
		}

		if (isSame)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}

