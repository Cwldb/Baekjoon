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

int find(int N)
{
	int i = 666;
	int series = 0;
	string target;
	while (1)
	{
		target = to_string(i);
		for (int j = 0; j < target.length() - 2; j++)
			if (target[j] == '6' && target[j + 1] == '6' && target[j + 2] == '6')
			{
				series++;
				if (series == N)
					return i;
				break;
			}
		i++;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	cout << find(N);
}