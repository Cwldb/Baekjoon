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

	int n, cnt = 1;
	cin >> n;
	
	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v[i] <= v[i + 1])
			cnt++;
	}

	cout << cnt;
}