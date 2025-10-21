#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <climits>
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

	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		queue<pair<int, int>> q;
		priority_queue<int> pq;

		int n, m, importance;
		cin >> n >> m;
		for (int j = 0; j < n; j++)
		{
			cin >> importance;
			q.push({ importance, j });
			pq.push(importance);
		}

		int prtCnt = 0;

		while (!q.empty())
		{
			pair<int, int> front = q.front();
			q.pop();

			if (front.first == pq.top())
			{
				prtCnt++;
				pq.pop();

				if (front.second == m)
				{
					cout << prtCnt << "\n";
					break;
				}
			}
			else
			{
				q.push(front);
			}
		}
	}
}