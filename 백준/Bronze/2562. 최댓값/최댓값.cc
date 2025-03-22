#include <iostream>
using namespace std;
int main()
{
	int a = 0, max1 = -1, cnt = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> a;

		if (a > max1)
		{
			max1 = a;
			cnt = i;
		}
	}

	cout << max1 << endl;
	cout << cnt + 1;
}