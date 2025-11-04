#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N;
int graph[26][26];
bool visited[26][26];
int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };

int BFS(int y, int x)
{
    queue<pair<int, int>> q;
    visited[y][x] = true;
    q.push({ y, x });

    int cnt = 1;

    while (!q.empty())
    {
        int fy = q.front().first;
        int fx = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = fy + dy[i];
            int nx = fx + dx[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < N)
            {
                if (graph[ny][nx] == 1 && !visited[ny][nx])
                {
                    visited[ny][nx] = true;
                    q.push({ ny, nx });
                    cnt++;
                }
            }
        }
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    string line;
    for (int i = 0; i < N; i++)
    {
        cin >> line;
        for (int j = 0; j < N; j++)
        {
            graph[i][j] = line[j] - '0';
        }
    }

    vector<int> houseVec;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (graph[i][j] == 1 && !visited[i][j])
            {
                int cnt = BFS(i, j);
                houseVec.push_back(cnt);
            }
        }
    }

    sort(houseVec.begin(), houseVec.end());

    cout << houseVec.size() << '\n';
    for (int cnt : houseVec)
        cout << cnt << '\n';
}
