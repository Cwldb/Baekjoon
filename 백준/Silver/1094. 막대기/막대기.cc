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
	int x, cnt = 0;
	cin >> x;

	while (x > 0)
	{
		if (x & 1) cnt++;
		x >>= 1;
	}

	cout << cnt;
}