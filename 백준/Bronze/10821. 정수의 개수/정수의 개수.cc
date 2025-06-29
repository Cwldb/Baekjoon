#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt = 1;
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ',')
			cnt++;
	}

	cout << cnt;
}

