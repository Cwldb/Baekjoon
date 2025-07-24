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

	long long n, sumNum = 1, cnt = 0;
	cin >> n;

	while (true)
	{
		cnt += sumNum;

		if (cnt > n)
			break;

		sumNum++;
	}

	cout << sumNum - 1 << "\n";
}