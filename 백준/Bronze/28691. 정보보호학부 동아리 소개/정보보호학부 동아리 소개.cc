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

    if (input == "M")
        cout << "MatKor";
    else if (input == "W")
        cout << "WiCys";
    else if (input == "C")
        cout << "CyKor";
    else if (input == "A")
        cout << "AlKor";
    else if (input == "$")
        cout << "$clear";

}