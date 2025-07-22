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

	string str[] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	long long values[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	long long multiple[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };

	long long result = 0;

	string a, b, c;
	cin >> a >> b >> c;

	for (int j = 0; j < 10; j++)
	{
		if (a == str[j])
			result += values[j] * 10;
	}

	for (int j = 0; j < 10; j++)
	{
		if (b == str[j])
			result += values[j];
	}

	for (int j = 0; j < 10; j++)
	{
		if (c == str[j])
			result *= multiple[j];
	}

	cout << result;
}