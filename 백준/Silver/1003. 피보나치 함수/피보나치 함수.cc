#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int dp0[41];
    int dp1[41];

    dp0[0] = 1;
    dp1[0] = 0;

    dp0[1] = 0;
    dp1[1] = 1;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;

        for (int j = 2; j <= m; j++)
        {
            dp0[j] = dp0[j - 1] + dp0[j - 2];
            dp1[j] = dp1[j - 1] + dp1[j - 2];
        }
        cout << dp0[m] << " " << dp1[m] << '\n';
    }
}


