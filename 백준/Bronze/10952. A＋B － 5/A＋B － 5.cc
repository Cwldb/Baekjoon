#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;

int main()
{
	bool isCalc = true;
	int a, b;

	while (true)
	{
		cin >> a >> b;

		if (a == 0 && b == 0)
			break;

		cout << a + b << endl;
	}
}