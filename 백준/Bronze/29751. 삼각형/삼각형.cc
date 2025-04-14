#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << fixed;
	cout.precision(1);
	cout << (float)(a * b) / 2;
}