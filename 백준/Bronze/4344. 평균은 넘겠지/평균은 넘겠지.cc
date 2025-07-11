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

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		vector<int> v(m);
		int sum = 0, stCnt = 0;

		for (int j = 0; j < m; j++)
		{
			cin >> v[j];
			sum += v[j];
		}
		sum /= m;

		for (int j = 0; j < m; j++)
		{
			if (v[j] > sum)
				stCnt++;
		}

		cout << fixed;
		cout.precision(3);
		cout << (double)stCnt / m * 100 << '%' << '\n';
	}
}
