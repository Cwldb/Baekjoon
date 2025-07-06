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

	vector<int> max_scores = { 100, 100, 200, 200, 300, 300, 400, 400, 500 };
	vector<int> v(9);
	int sum = 0;
	bool isHacker = false;

	for (int i = 0; i < 9; i++)
	{
		cin >> v[i];
		if (v[i] > max_scores[i])
			isHacker = true;
		sum += v[i];
	}

	if (isHacker)
		cout << "hacker\n";
	else if (sum >= 100)
		cout << "draw\n";
	else
		cout << "none\n";
}

