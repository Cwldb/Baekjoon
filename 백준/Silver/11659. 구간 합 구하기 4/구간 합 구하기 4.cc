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

    long long arr[100001] = { 0, };
    long long answer = 0;

    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = arr[i - 1] + temp;
    }

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << arr[b] - arr[a - 1] << '\n';
    }
}
