#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int calc = a + b + c + d;

	int minute = calc / 60;
	int second = calc % 60;

	cout << minute << endl << second << endl;

}