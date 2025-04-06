#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	int calc = a + b + c + d;
	int calc2 = (e * 4) - calc;
	if (calc2 <= 0)
		calc2 = 0;

	cout << calc2;
}