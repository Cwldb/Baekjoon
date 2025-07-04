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

	int a, d, k, cnt = 1;
	cin >> a >> d >> k;

	while (true)
	{
		if (a == k)
		{
			cout << cnt;
			break;
		}
		if ((d > 0 && a > k) || (d < 0 && a < k))
		{
			cout << "X";
			break;
		}

		a += d;
		cnt++;
	}

	
}

