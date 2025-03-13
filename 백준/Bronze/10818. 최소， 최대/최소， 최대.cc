#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a;
	int b;

	cin >> a;
	
	int max = -1000001;
	int min = 1000001;

	for (int i = 0; i < a; i++)
	{
		cin >> b;
		if (b > max)
			max = b;
		if (b < min)
			min = b;
	}

	cout << min << " " << max;
}