#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;

    vector<int> vec;
	vec.resize(str.length());

    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
		int trans = c - '0';
        vec[i] = trans;
	}

    sort(vec.rbegin(), vec.rend());

    for (int i = 0; i < str.size(); i++)
    {
        cout << vec[i];
    }

}
