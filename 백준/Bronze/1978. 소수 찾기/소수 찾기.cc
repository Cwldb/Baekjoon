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

	int n, cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;

		if (num == 1) continue;
		bool isPrime = true;
		for (int j = 2; j < num; j++)
		{
			if (num % j == 0)
				isPrime = false;
		}

		if (isPrime) 
			cnt++;
	}
	
	cout << cnt;
}

