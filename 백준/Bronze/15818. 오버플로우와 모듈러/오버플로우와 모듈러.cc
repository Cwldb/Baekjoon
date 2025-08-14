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

	int n;
	long long m, answer = 1;

	cin >> n >> m;

	while (n--)
	{
		long long x;
		cin >> x;
		answer = (answer * x) % m;
	}

	cout << answer;
	
}