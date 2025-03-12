#include<iostream>
using namespace std;

int main()
{
	int a, b, c; // r = a b c
	int price;

	cin >> a >> b >> c;

	if (a == b && b == c)
	{
		price = 10000 + (a * 1000);
	}

	else if (a == b || b == c || a == c)
	{
		if (a == b || a == c)
			price = 1000 + (a * 100);
		else if (b == c)
			price = 1000 + (b * 100);
	}

	else
	{
		int max1 = max(a, b);
		int max2 = max(max1, c);
		price = max2 * 100;
	}

	cout << price;
}