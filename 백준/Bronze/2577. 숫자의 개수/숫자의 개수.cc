#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<char> strV{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	vector<int> cntV(10);

	string str;
	int a, b, c, calc = 0;;

	cin >> a >> b >> c;

	calc = a * b * c;
	str = to_string(calc);

	for (int i = 0; i < str.size(); i++)
	{
		for (int j = 0; j < strV.size(); j++)
		{
			if (str[i] == strV[j])
			{
				int e = str[i] - '0';
				cntV[e]++;
			}
		}
	}

	for (int i = 0; i < cntV.size(); i++)
		cout << cntV[i] << endl;
}