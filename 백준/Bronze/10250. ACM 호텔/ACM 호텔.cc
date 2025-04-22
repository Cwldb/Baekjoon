#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int floor = 0, room = 0, person = 0, cnt = 1;
		cin >> floor >> room >> person;
		
		for (int j = 1; j <= room; j++)
		{
			for (int k = 1; k <= floor; k++)
			{
				person--;
				if (person == 0)
				{
					if (j < 10)
						cout << k << "0" << j << endl;
					else
						cout << k << j << endl;
				}
			}
		}
	}
}