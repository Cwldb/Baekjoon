#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int a; 
		cin >> a;

		int calc = a / 5;
		for (int j = 0; j < calc; j++)
		{
			cout << "++++ ";
		}

		for (int k = 0; k < a % 5; k++)
		{
			cout << "|";
		}
		cout << endl;
	}
}