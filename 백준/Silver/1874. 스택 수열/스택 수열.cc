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

	stack<int> s;
	vector<char> result;
	int cnt = 1;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		while (cnt <= x)
		{
			s.push(cnt);
			cnt += 1;
			result.push_back('+');
		}

		if (s.top() == x)
		{
			s.pop();
			result.push_back('-');
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << '\n';
	}
}