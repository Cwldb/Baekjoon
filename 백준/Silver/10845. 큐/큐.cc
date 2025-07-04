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

	int n;
	cin >> n;

	queue<int> q;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		if (str == "push")
		{
			int pValue;
			cin >> pValue;
			q.push(pValue);
		}

		else if (str == "pop")
		{
			if (q.empty())
				cout << -1;
			else
			{
				cout << q.front();
				q.pop();
			}
		}

		else if (str == "size")
		{
			cout << q.size();
		}

		else if (str == "empty")
		{
			if (q.empty())
				cout << 1;
			else
				cout << 0;
		}

		else if (str == "front")
		{
			if (q.empty())
				cout << -1;
			else
				cout << q.front();
		}

		else if (str == "back")
		{
			if (q.empty())
				cout << -1;
			else
				cout << q.back();
		}
		if (str != "push")
			cout << '\n';
	}

}

