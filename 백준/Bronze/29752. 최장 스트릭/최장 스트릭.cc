#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() 
{
	int n, cnt = 0, maxValue = -1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		if (input == 0)
		{
			maxValue = max(maxValue, cnt);
			cnt = 0;
		}
		else
		{
			cnt++;
			maxValue = max(maxValue, cnt);
		}
	}

	cout << maxValue;


}
