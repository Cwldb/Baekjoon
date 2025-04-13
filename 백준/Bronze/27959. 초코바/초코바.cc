#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a * 100 >= b)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}