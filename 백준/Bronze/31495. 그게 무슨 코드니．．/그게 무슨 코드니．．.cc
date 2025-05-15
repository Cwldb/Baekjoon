#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() 
{
	string str;
	getline(cin, str);

    if (str.length() <= 2 || !(str.front() == '\"' && str.back() == '\"')) // 길이가 2이하 또는 정확한 문자열이 아닌 경우
    {
        cout << "CE";
    }
    else
    {
        for (int i = 1; i < str.length() - 1; ++i)
        {
            cout << str[i];
        }
    }
}

