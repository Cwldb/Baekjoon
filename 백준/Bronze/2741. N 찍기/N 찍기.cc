#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);;
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a;
	cin >> a;
	string s = "";

	for (int i = 1; i <= a; i++)
	{
		s += to_string(i) + '\n';
	}

	cout << s;
}