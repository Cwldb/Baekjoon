#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string arrs[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	string input;
	cin >> input;

	int cnt = 0;

	for (int i = 0; i < input.size();)
	{
		bool isFind = false;
		for (int j = 0; j < 8; j++)
		{
			string target = arrs[j];
			if (input.substr(i, target.size()) == target)
			{
				i += target.size();
				isFind = true;
				break;
			}
		}
		if (!isFind)
		{
			i++;
		}
		cnt++;
	}

	cout << cnt;
}
