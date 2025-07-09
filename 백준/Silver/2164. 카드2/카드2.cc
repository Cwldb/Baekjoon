#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, size;
	cin >> n;

	queue<int> q;

	for (int i = 1; i <= n; i++) 
		q.push(i);

	size = q.size();

	for (int i = 0; i < size; i++)
	{
		if (q.size() == 1) break;
		q.pop();
		int front = q.front();
		q.pop();
		q.push(front);
	}

	cout << q.front();
}

