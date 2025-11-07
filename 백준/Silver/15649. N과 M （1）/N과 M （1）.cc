#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n, m;
int arr[10] = { 0 };
bool visited[10] = { 0 };

void DFS(int v)
{
    if (v == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            visited[i] = true;
            arr[v] = i;
            DFS(v + 1);
            visited[i] = false;
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    DFS(0);

}


