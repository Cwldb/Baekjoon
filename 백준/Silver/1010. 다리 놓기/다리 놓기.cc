#include <iostream>
#include <cstring>
using namespace std;

int n, m;
int dp[31][31];

void DP()
{
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= m; i++)
        dp[1][i] = i;

    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= m; j++)
        {
            for (int k = j; k >= i; k--)
            {
                dp[i][j] += dp[i - 1][k - 1];
            }
        }
    }

    cout << dp[n][m] << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        DP();
    }
    return 0;
}
