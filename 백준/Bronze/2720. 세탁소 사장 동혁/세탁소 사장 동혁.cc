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

	int money[4] = { 25, 10, 5, 1 };

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		vector<int> coins(4);
		int input, index = 0;;
		cin >> input;
		while (input != 0)
		{
			if (input < money[index])
			{
				index++;
				continue;
			}
			input -= money[index];
			coins[index]++;
		}
		cout << coins[0] << " " << coins[1] << " " << coins[2] << " " << coins[3] << "\n";
	}


}