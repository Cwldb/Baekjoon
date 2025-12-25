#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare (pair<int, int> a, pair<int, int> b)
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

    vector<pair<int, int>> pointVec;

    int input;
    cin >> input;

    for (int i = 0; i < input; i++)
    {
        int x, y;
		cin >> x >> y;
		pointVec.push_back({ x, y });
    }

    sort(pointVec.begin(), pointVec.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
		});

    for (const auto& point : pointVec)
    {
        cout << point.first << " " << point.second << "\n";
    }
}
