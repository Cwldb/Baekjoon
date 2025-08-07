#include <iostream>
#include <string>
#include <vector>
#include <limits>
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

	int n, log = 19;
	cin >> n;
	
	vector<vector<int>> v(log, vector<int>(n + 1));

	for (int i = 1; i <= n; i++)
		cin >> v[0][i];

	for (int k = 1; k < log; k++)
	{
		for (int i = 1; i <= n; i++)
		{
			int next = v[k - 1][i];
			v[k][i] = v[k - 1][next];
		}
	}

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x, k;
		cin >> x >> k;
		for (int i = 0; i < log; i++)
		{
			if (x & (1 << i))
				k = v[i][k];
		}
		cout << k << '\n';
	}
}