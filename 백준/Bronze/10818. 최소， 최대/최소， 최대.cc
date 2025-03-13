#include<iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int *arr = new int[a];


	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}

	int max = -1000001;
	int min = 1000001;

	for (int i = 0; i < a; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	cout << min << " " << max;
}