#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;
	cin >> a;

	int calc = 1;
	for (int i = 1; i <= a; ++i)
	{
		calc *= i;
	}

	cout << calc << endl;
}