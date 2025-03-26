#include <iostream>
using namespace std;

int main()
{
	int n, m, cnt = 0;
	cin >> n >> m;

	int* ptr = new int[n * m];
	int* ptr2 = new int[n * m];

	for (int i = 0; i < n * m; i++)
	{
		cin >> ptr[i];
	}

	for (int i = 0; i < n * m; i++)
	{
		cin >> ptr2[i];
	}

	for (int i = 0; i < n * m; i++)
	{
		if (cnt <= n)
			cout << ptr[i] + ptr2[i] << " ";
		else if (cnt <= n * (m / 2 + m % 2))
			cout << ptr[i] + ptr2[i] << " ";
		else if (cnt <= n * m)
			cout << ptr[i] + ptr2[i] << " ";
		cnt++;

		if (i != 0)
		{
			if (cnt % m == 0)
			{
				cout << '\n';
			}
		}
	}

	delete[] ptr;
	delete[] ptr2;
}