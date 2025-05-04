#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() 
{
	int a, b, c, d, e, mBurger, mJuice;
	cin >> a >> b >> c >> d >> e;

	mBurger = min(min(a, b), c);
	mJuice = min(d, e);

	cout << mBurger + mJuice - 50;
}
