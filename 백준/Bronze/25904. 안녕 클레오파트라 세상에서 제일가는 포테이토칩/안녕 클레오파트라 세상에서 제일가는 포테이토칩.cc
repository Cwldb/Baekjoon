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

	vector<int> maxV;

	int n, m, cnt = 1, index = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		maxV.push_back(input);
	}
	while (true)
	{
		if (maxV[index] < m)
		{
			cout << cnt;
			break;
		}

		m++;

		cnt++;
		if (cnt == n + 1)
			cnt = 1;
		index++;
		if (index == n)
			index = 0;
	}

}
