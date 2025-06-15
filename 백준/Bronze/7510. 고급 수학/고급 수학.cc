#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<long long> results(3);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> results[0] >> results[1] >> results[2];
		sort(results.begin(), results.end());

		long long result = (results[0] * results[0]) + (results[1] * results[1]);

		cout << "Scenario #" << i + 1 << ":\n";
		if (result == (results[2] * results[2]))
			cout << "yes\n\n";
		else
			cout << "no\n\n";
	}
}

