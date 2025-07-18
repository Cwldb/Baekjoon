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

	string input;
	cin >> input;

	if (input == "fdsajkl;" || input == "jkl;fdsa")
		cout << "in-out";
	else if (input == "asdf;lkj" || input == ";lkjasdf")
		cout << "out-in";
	else if (input == "asdfjkl;")
		cout << "stairs";
	else if (input == ";lkjfdsa")
		cout << "reverse";
	else
		cout << "molu";
}