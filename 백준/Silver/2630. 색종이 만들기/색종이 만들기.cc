#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<vector<int>> paper;

int whiteCnt = 0;
int blueCnt = 0;

void CutSquare(int x, int y, int size)
{
    int first = paper[x][y];
    bool same = true;

    for (int i = x; i < x + size; i++)
    {
        for (int j = y; j < y + size; j++)
        {
            if (paper[i][j] != first)
            {
                same = false;
                break;
            }
        }
        if (!same) break;
    }

    if (same)
    {
        if (first == 0) whiteCnt++;
        else blueCnt++;
        return;
    }

    int half = size / 2;

    CutSquare(x, y, half);
    CutSquare(x, y + half, half);
    CutSquare(x + half, y, half);
    CutSquare(x + half, y + half, half);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    paper.resize(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> paper[i][j];
        }
    }

    CutSquare(0, 0, n);

    cout << whiteCnt << '\n';
    cout << blueCnt << '\n';
}
