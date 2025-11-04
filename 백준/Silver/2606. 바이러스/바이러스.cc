#include <iostream>
#include <queue>
using namespace std;

int n, m;
int adj[101][101];
bool visited[101];

void Bfs(int v)
{
	queue<int> q;
	visited[v] = true;
	q.push(v);

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		for (int i = 1; i <= n; i++)
		{
			if (adj[cur][i] == 1 && !visited[i])
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

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a][b] = adj[b][a] = 1;
	}

	Bfs(1);

	int cnt = 0;
	for (int i = 2; i <= n; i++)
		if (visited[i])
			cnt++;

	cout << cnt;
}
