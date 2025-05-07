#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() 
{
	int n, minX = 10001, minY = 10001, maxX = -10001, maxY = -10001;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;

		minX = min(minX, x);
		minY = min(minY, y);
		maxX = max(maxX, x);
		maxY = max(maxY, y);
	}

	cout << (maxX - minX) * (maxY - minY);
}
