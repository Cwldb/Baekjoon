#include <iostream>
#include <queue>
using namespace std;

int N, M;
int adj[1001][1001];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

queue<pair<int, int>> q;

void BFS()
{
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < M && ny >= 0 && ny < N)
			{
				if (adj[nx][ny] == 0)
				{
					adj[nx][ny] = adj[x][y] + 1;
					q.push({ nx, ny });
				}
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> adj[i][j];
			if (adj[i][j] == 1)
				q.push({ i, j });
		}
	}

	BFS();

	int result = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (adj[i][j] == 0)
			{
				cout << -1;
				return 0;
			}
			result = max(result, adj[i][j]);
		}
	}

	cout << result - 1;
}
