#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	int calc = (a * a) + (b * b) + (c * c) + (d * d) + (e * e);
	int lcalc = calc % 10;

	cout << lcalc;
}