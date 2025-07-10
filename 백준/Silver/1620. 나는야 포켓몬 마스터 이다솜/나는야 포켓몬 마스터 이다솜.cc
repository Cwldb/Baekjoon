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

	unordered_map<string, int> poketmon;
	vector<string> poketmon_names;

	int n, m;
	cin >> n >> m;

	poketmon_names.resize(n + 1);

	for (int i = 1; i <= n; i++)
	{
		string input;
		cin >> input;
		poketmon[input] = i;
		poketmon_names[i] = input;
	}

	for (int i = 0; i < m; i++)
	{
		string quest;
		cin >> quest;
		if (quest[0] >= '0' && quest[0] <= '9')
		{
			int idx = stoi(quest);
			cout << poketmon_names[idx] << '\n';
		}
		else
			cout << poketmon[quest] << '\n';
	}
}
