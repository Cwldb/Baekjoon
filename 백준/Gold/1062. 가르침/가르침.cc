#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <math.h>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    vector<int> words;
    int N, K, answer = 0;

    cin >> N >> K;
    if (K < 5) {
        cout << 0 << "\n";
        return 0;
    }

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        int mask = 0;
        for (char c : s) {
            mask |= (1 << (c - 'a'));
        }
        words.push_back(mask);
    }

    int essential = 0;
    for (char c : {'a', 'n', 't', 'i', 'c'})
        essential |= (1 << (c - 'a'));

    vector<int> alphaIndices;
    for (int i = 0; i < 26; i++) {
        if (!(essential & (1 << i)))
            alphaIndices.push_back(i);
    }

    int combSize = K - 5;
    int maxComb = 1 << alphaIndices.size();

    for (int comb = 0; comb < maxComb; comb++) {
        if (__builtin_popcount(comb) != combSize) continue;

        int learn = essential;
        for (int i = 0; i < alphaIndices.size(); i++) {
            if (comb & (1 << i)) {
                learn |= (1 << alphaIndices[i]);
            }
        }

        int count = 0;
        for (int w : words) {
            if ((w & learn) == w)
                count++;
        }
        answer = max(answer, count);
    }

    cout << answer << "\n";
}