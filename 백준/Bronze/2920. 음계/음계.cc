#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int v, asc = 0, desc = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> v;
		if (v == i + 1) asc++;
		else if (v == 8 - i) desc++;
	}

	if (asc == 8) cout << "ascending";
	else if (desc == 8) cout << "descending";
	else cout << "mixed";
}