#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int dp[100];

	int n;
	cin >> n;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	dp[4] = 7;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		for (int j = 5; j <= a; j++)
		{
			dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
		}
		cout << dp[a] << '\n';
	}
}
