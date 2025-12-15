#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sNum, tNum;
    cin >> sNum >> tNum;

    vector<bool> vec(tNum + 1, true);
    vec[0] = false;
    vec[1] = false;

    for (int i = 2; i * i <= tNum; i++)
    {
        if (vec[i])
        {
            for (int j = i * i; j <= tNum; j += i)
            {
                vec[j] = false;
            }
        }
    }

    for (int i = sNum; i <= tNum; i++)
    {
        if (vec[i])
            cout << i << '\n';
    }
}
