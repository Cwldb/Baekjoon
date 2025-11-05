#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool s[21] = { false };
    int m;
    cin >> m;

    while (m--)
    {
        string str;
        int num;
        cin >> str;

        if (str == "add") {
            cin >> num;
            s[num] = true;
        }
        else if (str == "remove") {
            cin >> num;
            s[num] = false;
        }
        else if (str == "check") {
            cin >> num;
            cout << (s[num] ? 1 : 0) << '\n';
        }
        else if (str == "toggle") {
            cin >> num;
            s[num] = !s[num];
        }
        else if (str == "all") {
            for (int i = 1; i <= 20; i++) s[i] = true;
        }
        else if (str == "empty") {
            for (int i = 1; i <= 20; i++) s[i] = false;
        }
    }
}


