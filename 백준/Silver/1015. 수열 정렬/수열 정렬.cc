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

	int n;
	cin >> n;

	vector<pair<int, int>> v;
	vector<int> answerV(n);

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v.push_back({ input, i });
	}
	
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
		answerV[v[i].second] = i;

	for (auto a : answerV)
		cout << a << " ";

}