#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int arr[10001];

	cin >> a;
	cin >> b;

	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}

	int cnt = 0;
	for (int i = 0; i < a; i++)
	{
		if (arr[i] < b)
			cout << arr[i] << " ";
	}
}