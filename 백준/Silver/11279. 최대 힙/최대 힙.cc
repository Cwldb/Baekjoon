#include <iostream>
#include <deque>
#include <string>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<long long> mHeap;

    while (n--) 
    {
        long long x;
        cin >> x;

        if (x == 0) 
        {
            if (mHeap.empty()) 
            {
                cout << 0 << '\n';
            }
            else 
            {
                cout << mHeap.top() << '\n';
                mHeap.pop();
            }
        }
        else 
        {
            mHeap.push(x);
        }
    }
}
