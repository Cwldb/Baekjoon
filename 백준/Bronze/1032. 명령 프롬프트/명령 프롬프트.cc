#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() 
{
	string answer = "";
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		if (answer.empty())
			answer = str;
		else
			for (int j = 0; j < str.length(); j++)
			{
				if (str[j] != answer[j])
					answer[j] = '?';
			}
		
	}

	cout << answer;
}
