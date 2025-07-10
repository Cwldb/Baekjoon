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

	map<int, int> map;

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		map[i] = 0;
	}

	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;

		for (int j = a; j <= b; j++)
		{
			map[j] = c;
		}
	}

	for (auto value : map)
	{
		cout << value.second << " ";
	}
}
