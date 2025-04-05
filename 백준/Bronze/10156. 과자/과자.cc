#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int calc = (a * b) - c;
	if (calc < 0)
		calc = 0;

	cout << calc << endl;
}