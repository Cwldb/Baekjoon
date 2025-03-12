#include<iostream>
using namespace std;

int main()
{
	int hour, minute, input;

	cin >> hour >> minute >> input;

	int calc;
	calc = minute + input;

	if (calc >= 60)
	{
		int a;
		a = calc / 60;
		hour += a;
		calc %= 60;
	}

	if (hour >= 24)
	{
		hour %= 24;
	}

	cout << hour << " " << calc;
}