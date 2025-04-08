#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int cnt = 0;
	int arr[42] = {};

	for (int i = 0; i < 10; ++i)
	{
		int n;
		cin >> n;
		arr[n % 42]++;
	}

	for (int i = 0; i < 42; i++)
	{
		if (arr[i] > 0)
			cnt++;
	}

	cout << cnt;
}