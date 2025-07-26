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

	string s;
	cin >> s;

	int index = 0, cntZero = 0, cntOne = 0;
	char temp = s[0];

	if (temp == '0') cntZero++;
	else cntOne++;

	for (int i = 1; i < s.size(); i++)
	{
		if (temp != s[i])
		{
			if (s[i] == '0') cntZero++;
			else cntOne++;
			temp = s[i];
		}
	}

	cout << min(cntOne, cntZero);
}