#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Comp(string str1, string str2)
{
	if (str1.length() == str2.length())
		return str1 < str2;

	return str1.length() < str2.length();
}

int main() 
{
	int a;
	cin >> a;

	string strV[20000];

	for (int i = 0; i < a; i++)
	{
		cin >> strV[i];
	}

	sort(strV, strV + a, Comp);

	for (int i = 0; i < a; i++)
	{
		if (strV[i] == strV[i - 1])
			continue;
		cout << strV[i] << endl;
	}

}
