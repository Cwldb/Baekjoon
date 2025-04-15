#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int calc = b / a * 3;
	cout << calc * c;
}