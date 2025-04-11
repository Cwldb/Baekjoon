#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

long long int Pac(int a)
{
	if (a == 0 || a == 1)
		return 1;
	else
		return Pac(a - 1) * a;
}

int main()
{
	int a;
	cin >> a;

	cout << Pac(a);
}