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

	int answer, a, input, cnt = 0;
	cin >> input;
	answer = input;
	a = input;

	while (true)
	{
		cnt++;
		int value = a % 10;
		int aV = a / 10;
		int sum = (value + aV) % 10;

		a = (value * 10) + sum;
		if (cnt != 0 && a == answer) break;
	}
	cout << cnt;

}

