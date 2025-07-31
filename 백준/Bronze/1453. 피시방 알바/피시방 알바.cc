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

	int n, input, cnt = 0;
	cin >> n;

	map<int, bool> m;

	for (int i = 1; i <= 100; i++)
		m[i] = false;

	for (int i = 1; i <= n; i++)
	{
		cin >> input;
		if (m[input])
			cnt++;
		m[input] = true;
	}

	cout << cnt;
}