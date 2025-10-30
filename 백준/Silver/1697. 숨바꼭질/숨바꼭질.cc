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

int n, k;
int visited[100001] = {};

int BFS()
{
	queue<int> q;
	q.push(n);
	visited[n] = 0;

	while (!q.empty())
	{
		int front = q.front();
		q.pop();

		if (front == k) break;

		int minPos = front - 1;
		int maxPos = front + 1;
		int teleportPos = front * 2;

		if (minPos >= 0 && visited[minPos] == 0)
		{
			q.push(minPos);
			visited[minPos] = visited[front] + 1;
		}

		if (maxPos <= 100000 && visited[maxPos] == 0)
		{
			q.push(maxPos);
			visited[maxPos] = visited[front] + 1;
		}

		if (teleportPos <= 100000 && visited[teleportPos] == 0)
		{
			q.push(teleportPos);
			visited[teleportPos] = visited[front] + 1;
		}
	}

	return visited[k];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;
	cout << BFS() << "\n";
}