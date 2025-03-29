#include <iostream>
#include <string>
using namespace std;

int Calc(int a, int b)
{
	int sum = a + b;
	int sub = a - b;

	int calc = sum * sub;

	return calc;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << Calc(a, b) << endl;
}