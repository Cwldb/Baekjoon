#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>
#include <map>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, idx = 0;
    cin >> n;

    map<int, vector<string>> ageMap;

    for (int i = 0; i < n; ++i) {
        int age;
        string name;
        cin >> age >> name;
        ageMap[age].push_back(name);
    }

    for (auto& pair : ageMap) {
        int age = pair.first;
        for (auto& name : pair.second) {
            cout << age << " " << name << '\n';
        }
    }

}

