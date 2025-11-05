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

    priority_queue<long long, vector<long long>, greater<long long>> q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        if (input == 0)
        {
            if (q.empty())
                cout << 0 << '\n';
            else
            {
                cout << q.top() << '\n';
                q.pop();
            }
        }

        else
        {
            q.push(input);
        }
    }

}
