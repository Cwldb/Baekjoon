#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>

using namespace std;

int Func(int a)
{
	if (a == 0)
		return 0;
	else if (a == 1)
		return 1;
	else
		return Func(a - 2) + Func(a - 1);
}

int main() 
{
	int n;
	cin >> n;
	cout << Func(n);
}

