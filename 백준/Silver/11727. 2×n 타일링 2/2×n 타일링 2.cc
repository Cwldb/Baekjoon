#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int dp[10001];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;

    int input;
    cin >> input;

    for (int i = 3; i <= input; i++)
    {
		dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 2]) % 10007;
    }

    cout << dp[input];
}
