#include <iostream>

using namespace std;

int main() 
{
	int a, cnt = 1, layer = 1;
	cin >> a;
    
	while (a > cnt)
	{
		cnt += 6 * layer;
		layer++;
	}

	cout << layer;
}
