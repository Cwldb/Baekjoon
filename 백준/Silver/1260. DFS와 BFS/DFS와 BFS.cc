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

int adj[1001][1001];
bool visited[1001];

int adjSize;

void DFS(int v)
{
	visited[v] = true;
	cout << v << " ";
	for (int i = 0; i <= adjSize; i++)
	{
		if (adj[v][i] == 1 && !visited[i])
		{
			DFS(i);
		}
	}
}

void BFS(int v)
{
	queue<int> q;
	visited[v] = true;
	q.push(v);

	while (!q.empty())
	{
		int curr = q.front();
		q.pop();
		cout << curr << " ";

		for (int i = 0; i <= adjSize; i++)
		{
			if (adj[curr][i] == 1 && !visited[i])
			{
				visited[i] = true;
				q.push(i);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, v;
	cin >> n >> m >> v;
	adjSize = n;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a][b] = 1;
		adj[b][a] = 1;
	}

	DFS(v);
	cout << "\n";

	for (int i = 1; i <= n; i++)
	{
		visited[i] = false;
	}

	BFS(v);
}