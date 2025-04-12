#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int socks[5] = {};
	for (int i = 0; i < 5; i++)
		cin >> socks[i];

	sort(socks, socks + 5);
	if (socks[0] == socks[1] && socks[2] == socks[3])
		cout << socks[4];
	else if (socks[0] == socks[1] && socks[3] == socks[4])
		cout << socks[2];
	else if (socks[1] == socks[2] && socks[3] == socks[4])
		cout << socks[0];
}