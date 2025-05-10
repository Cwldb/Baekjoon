#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() 
{
	int a, b, c;
	vector<int> v;

	cin >> a >> b >> c;

	v.push_back(a);
	v.push_back(b);
	v.push_back(c);

	sort(v.begin(), v.end());

	cout << v[1] << endl;
}

