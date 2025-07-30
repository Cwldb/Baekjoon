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

	int n, m, s, t;
	cin >> n >> m;

	vector<vector<pair<int, int>>> busStop(n + 1);

	for (int i = 0; i < m; i++)
	{
		int from, to, cost;
		cin >> from >> to >> cost;
		busStop[from].push_back({ to, cost });
	}

	cin >> s >> t;

	vector<int> minCost(n + 1, numeric_limits<int>::max());
	minCost[s] = 0;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
	pq.emplace(0, s);

	while (!pq.empty())
	{
		int cost = pq.top().first;
		int cur = pq.top().second;
		pq.pop();

		if (minCost[cur] < cost) continue;

		for (auto& next : busStop[cur])
		{
			int nextNode = next.first;
			int nextCost = next.second;

			if (minCost[nextNode] > cost + nextCost)
			{
				minCost[nextNode] = cost + nextCost;
				pq.emplace(minCost[nextNode], nextNode);
			}
		}
	}

	cout << minCost[t];
}