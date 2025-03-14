#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int hour;
	int minute;
	int calc;
	int result;

	cin >> hour >> minute;
	calc = minute - 45;

	if (calc >= 0)
	{
		cout << hour << ' ' << calc;
	}
	else
	{
		calc = 60 + calc;
		hour--;

		if (hour < 0)
			hour = 23;
		else if (hour > 23)
			hour = 0;
		cout << hour << ' ' << calc;
	}
}