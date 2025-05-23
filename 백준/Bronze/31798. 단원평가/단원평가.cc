#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>

using namespace std;

int main() 
{
	int a, b, c, calc = 0;
	cin >> a >> b >> c;

	if (c == 0)
	{
		calc = a + b;
		cout << sqrt(calc);
	}

	else if (a == 0)
	{
		calc = (c * c) - b;
		cout << calc;
	}

	else if (b == 0)
	{
		calc = (c * c) - a;
		cout << calc;
	}
}

