#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int Factorial(int n) {
	if (n == 0 || n == 1) return 1;
	return n * Factorial(n - 1);
}

int main() 
{
	int a, b;
	cin >> a >> b;

	int result = Factorial(a) / (Factorial(b) * Factorial(a - b));
	cout << result;
}

