#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int adj[1001][1001];
int dist[1001][1001];
bool visited[1001][1001];
int dx[] = { 0, 0, -1, 1 };
int dy[] = { 1, -1, 0, 0 };

void BFS(int y, int x, int n, int m) 
{
    queue<pair<int, int>> q;
    q.push({ y, x });
    visited[y][x] = true;
    dist[y][x] = 0;

    while (!q.empty()) 
    {
        int cy = q.front().first;
        int cx = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) 
        {
            int ny = cy + dy[i];
            int nx = cx + dx[i];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;

            if (adj[ny][nx] != 0 && visited[ny][nx] == false)
            {
                visited[ny][nx] = true;
                dist[ny][nx] = dist[cy][cx] + 1;
                q.push({ ny, nx });
            }
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int sY = 0, sX = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
        {
            cin >> adj[i][j];
            dist[i][j] = -1;
            if (adj[i][j] == 2) 
            {
                sY = i;
                sX = j;
            }
        }
    }

    BFS(sY, sX, n, m);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (adj[i][j] == 0) cout << 0 << ' ';
            else cout << dist[i][j] << ' ';
        }
        cout << '\n';
    }
}


