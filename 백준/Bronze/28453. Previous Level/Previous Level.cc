#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<int> v(300);
	int a = 0;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < a; i++)
	{
		if (v[i] <= 300)
		{
			if (v[i] == 300)
				cout << 1 << " ";
			else if (v[i] >= 275)
				cout << 2 << " ";
			else if (v[i] >= 250)
				cout << 3 << " ";
			else
				cout << 4 << " ";
		}
	}
}