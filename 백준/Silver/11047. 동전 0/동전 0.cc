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

	int n, m, input, sum, cnt = 0, size;
	cin >> n >> m;

	vector<int> moneys;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		moneys.push_back(input);
	}

	size = moneys.size() - 1;

	while (true)
	{
		if (m == 0)
			break;

		if (m - moneys[size] >= 0)
		{
			m -= moneys[size];
			cnt++;
		}
		else
			size--;
	}

	cout << cnt;
}