#include<iostream>
using namespace std;

int main()
{
	int a;
	int arr[101];
	int b;

	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}
	cin >> b;

	int cnt = 0;
	for (int i = 0; i < a; i++)
	{
		if (arr[i] == b)
			cnt++;
	}

	cout << cnt;
}