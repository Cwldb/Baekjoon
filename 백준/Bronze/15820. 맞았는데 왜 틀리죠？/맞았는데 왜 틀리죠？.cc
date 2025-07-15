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

	int n, m;
	cin >> n >> m;

	bool isSame1 = false, isSame2 = false;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;

		if (a != b)
			isSame1 = true;
	}

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;

		if (a != b)
			isSame2 = true;
	}

	if (!isSame1 && !isSame2)
		cout << "Accepted\n";
	else if (isSame1 && !isSame2)
		cout << "Wrong Answer\n";
	else if (!isSame1 && isSame2)
		cout << "Why Wrong!!!\n";
}
