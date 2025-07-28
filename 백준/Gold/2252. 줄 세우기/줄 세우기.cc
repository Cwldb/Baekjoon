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

	int n, m;
	cin >> n >> m;

	vector<vector<int>> graph(n + 1);
	vector<int> check(n + 1, 0);

	queue<int> q;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;

		graph[a].push_back(b);
		check[b]++;
	}

	for (int i = 1; i <= n; i++)
	{
		if (check[i] == 0)
			q.push(i);
	}

	while (!q.empty())
	{
		int top = q.front();
		q.pop();

		cout << top << ' ';

		for (auto next : graph[top])
		{
			check[next]--;
			if (check[next] == 0)
				q.push(next);
		}
	}
}