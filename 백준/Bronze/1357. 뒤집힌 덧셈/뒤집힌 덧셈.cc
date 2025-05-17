#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() 
{
	string a, b, answer;
	int iA, iB, calc;
	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	iA = stoi(a);
	iB = stoi(b);

	calc = iA + iB;

	if (calc % 1000 == 0)
		calc /= 1000;
	else if (calc % 100 == 0)
		calc /= 100;
	else if (calc % 10 == 0)
		calc /= 10;

	answer = to_string(calc);

	reverse(answer.begin(), answer.end());
	cout << answer;
}

