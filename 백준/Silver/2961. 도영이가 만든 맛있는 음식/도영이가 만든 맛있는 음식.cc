#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, minV = 1000000000;
	cin >> n;

	vector<int> sv;
	vector<int> av;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;

		sv.push_back(a);
		av.push_back(b);
	}

	for (int i = 0; i < (1 << n); i++)
	{
		if (i == 0) continue;

		int sum = 0, multiple = 1;

		for (int j = 0; j < n; j++)
		{
			if (i >> j & 1)
			{
				multiple *= sv[j];
				sum += av[j];
			}
		}

		minV = min(minV, std::abs(sum - multiple));
	}

	cout << minV;
}