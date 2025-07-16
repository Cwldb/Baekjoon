#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c, d, inpt1, inpt2;
	cin >> inpt1 >> inpt2;

	a = inpt1;
	b = inpt2;

	while (b) 
	{
		int temp;
		temp = a % b;
		a = b;
		b = temp;
	}

	cout << a << endl << (inpt1 * inpt2) / a;
}
