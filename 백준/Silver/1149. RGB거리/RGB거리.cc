#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, answer;
	cin >> n;

	vector<vector<int>> costV(n, vector<int>(3));
	vector<vector<int>> dp(n, vector<int>(3));

	for (int i = 0; i < n; i++)
		cin >> costV[i][0] >> costV[i][1] >> costV[i][2];

	dp[0][0] = costV[0][0];
	dp[0][1] = costV[0][1];
	dp[0][2] = costV[0][2];

	for (int i = 1; i < n; i++)
	{
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + costV[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + costV[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + costV[i][2];
	}

	answer = min({ dp[n - 1][0], dp[n - 1][1], dp[n - 1][2] });
	cout << answer;
}