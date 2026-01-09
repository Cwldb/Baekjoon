#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x1, y1, r1, x2, y2, r2;
    int n;

    int value1, value2;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        value1 = (r1 - r2) * (r1 - r2);
        value2 = (r1 + r2) * (r1 + r2);

        int dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

        if (dist == 0)
        {
            if (value1 == 0)
                cout << "-1\n";
            else
                cout << "0\n";
        }
        else if (dist == value1 || dist == value2)
            cout << "1\n";
        else if (value1 < dist && dist < value2)
            cout << "2\n";
        else
			cout << "0\n";
    }
}
