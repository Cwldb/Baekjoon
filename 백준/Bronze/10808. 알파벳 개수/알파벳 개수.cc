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

	vector<int> v(26, 0);
	v.resize(26);

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		int index = s[i] - 'a';
		v[index]++;
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}

