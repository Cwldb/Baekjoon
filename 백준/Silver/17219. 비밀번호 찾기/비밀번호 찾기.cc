#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <climits>
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

	map<string, string> map;

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string site, password;
		cin >> site >> password;
		map[site] = password;
	}

	for (int i = 0; i < m; i++)
	{
		string site;
		cin >> site;
		auto iter = map.find(site);
		cout << iter->second << '\n';
	}
}