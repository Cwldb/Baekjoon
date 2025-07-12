#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	if (a >= 1000 && b >= 8000 || a >= 1000 && c >= 260)
		cout << "Very Good\n";
	else if (a >= 1000)
		cout << "Good\n";
	else
		cout << "Bad\n";
}
