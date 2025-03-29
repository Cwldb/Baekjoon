#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	float point = 0;
	cout << fixed;
	cout.precision(1);

	switch (str[0])
	{
		case 'A' : 
			point += 4;
			break;

		case 'B':
			point += 3;
			break;

		case 'C':
			point += 2;
			break;

		case 'D':
			point += 1;
			break;

		case 'F':
			point = 0;
			break;
	}

	switch (str[1])
	{
		case '+':
			point += 0.3;
			break;

		case '-':
			point -= 0.3;
			break;
	}

	cout << point << endl;
		
}