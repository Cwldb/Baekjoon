#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() 
{
	int n, t, p, cnt = 0;
	cin >> n;

	queue<int> q;

	for (int i = 0; i < 6; i++)
	{
		int a;
		cin >> a;

		q.push(a);
	}

	cin >> t >> p;

	while (!q.empty())
	{
		if (q.front() == 0)
		{
			q.pop();
			continue;
		}

		if (q.front() <= t)
			cnt++;
		else if (q.front() % t == 0)
			cnt += q.front() / t;
		else
			cnt += q.front() / t + 1;
		q.pop();
	}
	cout << cnt << '\n';
	cout << n / p << " " << n % p;
}