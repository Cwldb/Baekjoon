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

	stack<int> s;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		if (str == "push")
		{
			int x;
			cin >> x;
			s.push(x);
		}
		else if (str == "pop")
		{
			if (s.empty())
				cout << -1 << "\n";
			else
			{
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (str == "size")
		{
			cout << s.size() << "\n";
		}
		else if (str == "empty")
		{
			cout << s.empty() << "\n";
		}
		else if (str == "top")
		{
			if (s.empty())
				cout << -1 << "\n";
			else
				cout << s.top() << "\n";
		}
	}
}

