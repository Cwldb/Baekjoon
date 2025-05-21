#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() 
{
	int n, cnt = 0;
	cin >> n;

	vector<int> v(26);

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		char c = str[0];
		v[(int)c - 97]++;
	}

	for (int i = 0; i < v.size(); i++)
	{
		char c;
		if (v[i] >= 5)
		{
			c = (char)i + 97;
			cnt++;
			cout << c;
		}
	}

	if (cnt == 0)
		cout << "PREDAJA";
}

