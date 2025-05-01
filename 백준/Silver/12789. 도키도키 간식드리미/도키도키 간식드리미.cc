#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<int> s; // 교차로
    int curReq = 1;

    for (int i = 0; i < n; ++i)
    {
        int input;
        cin >> input;
        s.push(input);

        while (!s.empty()&&s.top() == curReq)
        {
            s.pop();
            curReq++;
        }
    }

    cout << (s.empty() ? "Nice" : "Sad");
}