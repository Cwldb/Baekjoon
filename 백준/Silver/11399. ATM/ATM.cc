#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <climits>
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

	int n;
	cin >> n;

	vector<int> useTime(n + 1);

	for (int i = 1; i <= n; i++)
	{
		cin >> useTime[i];
	}

	sort(useTime.begin(), useTime.end());

	for (int i = 2; i <= n; i++)
	{
		useTime[i] = useTime[i - 1] + useTime[i];
	}

	int cnt = 0;
	for (auto item : useTime)
	{
		cnt += item;
	}

	cout << cnt;
}