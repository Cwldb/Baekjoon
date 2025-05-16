#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() 
{
	int h, w;
	float minValue;
	cin >> h >> w;

	minValue = min(h, w);

	cout << minValue / 2 * 100;
}

