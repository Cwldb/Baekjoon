#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);

    vector<bool> vec(10001, false);
    vector<string> str(10001);

    int index = 1;

    while (index <= 10000)
    {
        str[index] = to_string(index);

        int sum = index;
        for (char c : str[index])
            sum += c - '0';

        if (sum <= 10000)
            vec[sum] = true;

        index++;
    }

    index = 1;
    while (index <= 10000)
    {
        if (!vec[index])
            cout << index << '\n';
        index++;
    }
}
