#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({ a, b });
    }

    sort(v.begin(), v.end(), cmp);

    int cnt = 0;
    int lastEnd = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i].first >= lastEnd)
        {
            lastEnd = v[i].second;
            cnt++;
        }
    }

    cout << cnt;
}
