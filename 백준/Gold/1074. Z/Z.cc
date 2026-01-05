#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, r, c;
    cin >> n >> r >> c;

    int result = 0;

    while (n > 0)
    {
        int half = 1 << (n - 1);
        int block = half * half;

        if (r < half && c < half)
        {
        }
        else if (r < half && c >= half)
        {
            result += block;
            c -= half;
        }
        else if (r >= half && c < half)
        {
            result += block * 2;
            r -= half;
        }
        else
        {
            result += block * 3;
            r -= half;
            c -= half;
        }

        n--;
    }

    cout << result;
}
