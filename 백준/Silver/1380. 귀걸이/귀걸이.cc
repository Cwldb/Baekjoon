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

	int cnt = 0;

	while (true)
	{
		string answerName;
		int n, sNum = 0;
		cin >> n;
		cin.ignore();


		if (n == 0)
			break;

		map<string, int> nameMap;
		map<int, int> cntMap;

		for (int i = 0; i < n; i++)
		{
			string input;
			getline(cin, input);

			nameMap[input] = i + 1;
		}

		for (int i = 0; i < (2 * n) - 1; i++)
		{
			int num;
			char tag;
			cin >> num >> tag;
			cntMap[num]++;
		}

		for (auto a : cntMap)
		{
			if (a.second < 2)
				sNum = a.first;
		}

		for (auto a : nameMap)
		{
			if (a.second == sNum)
				answerName = a.first;
		}

		cnt++;
		cout << cnt << " " << answerName << '\n';
	}
}