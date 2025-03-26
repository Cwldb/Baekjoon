#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int arr[30] = {};

	for (int i = 0; i < 30; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < 28; i++)
	{
		cin >> n;

		for (int j = 0; j < 30; j++)
		{
			if (arr[j] == n)
			{
				arr[j] = 0;
			}
		}
	}

	for (int i = 0; i < 30; i++)
	{
		if (arr[i] != 0)
			cout << arr[i] << endl;
	}
}