#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> selected;

void DFS(int s)
{
    if (selected.size() == m)
    {
        for (int num : selected)
            cout << num << ' ';
        cout << '\n';
        return;
    }

    for (int i = s; i <= n; i++)
    {
        selected.push_back(i);
        DFS(i + 1);
        selected.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);

    cin >> n >> m;
    DFS(1);
}
