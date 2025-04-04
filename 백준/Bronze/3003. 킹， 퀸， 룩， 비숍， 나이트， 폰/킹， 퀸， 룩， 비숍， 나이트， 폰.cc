#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<int> input(6);

	int c[6] = { 1,1,2,2,2,8 };

	for (int i = 0; i < input.size(); i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < input.size(); i++)
	{
		if (c[i] == input[i])
			cout << 0 << " ";
		else
			cout << c[i] - input[i] << " ";
	}



}