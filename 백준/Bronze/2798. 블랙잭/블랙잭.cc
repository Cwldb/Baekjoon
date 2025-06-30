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

	vector<int> v;

	int n, m;
	cin >> n >> m;
	v.resize(n);

	int maxValue = -100001, cnt;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v[i] = input;
	}

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				cnt = v[i] + v[j] + v[k];
				if (cnt <= m && cnt > maxValue)
					maxValue = cnt;
			}
		}
	}

	cout << maxValue;
}

