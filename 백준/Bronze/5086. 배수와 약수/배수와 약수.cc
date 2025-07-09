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

	int a, b;

	while (true)
	{
		cin >> a >> b;

		if (a == 0 && b == 0)
			break;

		if (a % b == 0)
			cout << "multiple\n";
		else if (b % a == 0)
			cout << "factor\n";
		else
			cout << "neither\n";
	}
}

