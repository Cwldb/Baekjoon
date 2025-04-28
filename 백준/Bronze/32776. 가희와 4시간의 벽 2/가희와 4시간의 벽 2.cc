#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a <= (b + c + d) || a <= 240)
		cout << "high speed rail";
	else
		cout << "flight";
}
