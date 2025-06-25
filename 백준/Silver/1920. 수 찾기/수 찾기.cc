#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a = 0;

	vector<int> v1;

	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int input;
		cin >> input;
		v1.push_back(input);
	}

	sort(v1.begin(), v1.end());

	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int input, left, right, mid, answer;
		cin >> input;
		left = 0;
		right = v1.size() - 1;
		answer = 0;
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (input == v1[mid])
			{
				answer = 1;
				break;
			}
			else if (input > v1[mid])
				left = mid + 1;
			else if (input < v1[mid])
				right = mid - 1;
		}
		cout << answer << '\n';
	}
}