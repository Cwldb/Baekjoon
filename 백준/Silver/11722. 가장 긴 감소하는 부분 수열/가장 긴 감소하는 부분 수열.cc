#include <iostream>

using namespace std;

int N;
int M[1000];
int dp[1001];

int main() 
{
    cin >> N;
    for (int i = 0; i < N; i++) 
    {
        cin >> M[i];
    }

    dp[0] = 1;
    int ans = 1;

    for (int i = 1; i < N; i++)
    {
        int temp = 0;
        for (int j = 0; j < i; j++)
        {
            if (M[i] < M[j] && dp[j] > temp)
                temp = dp[j];
        }
        dp[i] = temp + 1;
        ans = max(dp[i], ans);
    }

    cout << ans;
}

