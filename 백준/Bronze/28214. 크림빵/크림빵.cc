#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() 
{
	int n, k, p, cnt = 0, zeroCnt = 0;
	cin >> n >> k >> p;
	cnt = n;

	queue<int> q;
	
	for (int i = 0; i < n * k; i++)
	{
		int a;
		cin >> a;
		q.push(a);
	}
	
	while (q.size() > 0)
	{
		for (int i = 0; i < k; i++)
		{
			if (q.front() == 0)
			{
				zeroCnt++;
				q.pop();
			}
			else
				q.pop();
		}
		if (zeroCnt >= p)
			cnt--;
		zeroCnt = 0;
	}

	cout << cnt;
}

