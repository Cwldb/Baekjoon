#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<float> v;
	float allNum = 0;
	int a, b, max1 = -1;

	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b;
		v.push_back(b);
		max1 = max(max1, b);
	}

	for (int i = 0; i < a; i++)
	{
		allNum += v[i] / max1 * 100;
	}

	cout << allNum / a;
}
