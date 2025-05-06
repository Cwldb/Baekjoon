#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() 
{
	vector<int> vCnt(26);
	string str;
	char answer;
	int index = -1, max1 = -1;
	bool isSame = false;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		char c = tolower(str[i]);
		vCnt[(int)c - 97]++;
	}

	for (int i = 0; i < vCnt.size(); i++)
	{
		if (vCnt[i] > max1) 
		{
			max1 = vCnt[i];
			index = i;
			isSame = false;
		}

		else if (vCnt[i] == max1) 
		{
			isSame = true;
		}
	}

	answer = (char)index + 97 - 32;
	if (!isSame)
		cout << answer;
	else
		cout << "?";
}
