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

	int n, m, temp;
	cin >> n >> m;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
		v[i] = i + 1;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		a--;
		b--;

		temp = v[a];
		v[a] = v[b];
		v[b] = temp;
	}

	for (auto a : v)
		cout << a << " ";
}