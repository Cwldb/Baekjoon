#include <iostream>
#include <string>
#include <vector>
#include <limits>
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

	int answer = -1;

	for (int i = 0; i <= n / 5; i++)
	{
		int remain = n - (5 * i);
		if (remain % 3 == 0)
		{
			int cnt = i + (remain / 3);
			if (answer == -1 || cnt < answer)
				answer = cnt;
		}
	}

	cout << answer;
}