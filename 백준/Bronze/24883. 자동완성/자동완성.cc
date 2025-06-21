#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	if (s == "N" || s == "n")
	{
		cout << "Naver D2" << endl;
	}
	else
		cout << "Naver Whale" << endl;
}

