#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);

    int arr[1000001];

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
		cin >> arr[i];
		v.push_back(arr[i]);
    }

	sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()), v.end());

    for (int i = 0; i < n; i++)
    {
		int index = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
		cout << index << " ";
    }
}
