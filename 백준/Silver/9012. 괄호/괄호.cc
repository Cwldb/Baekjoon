#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		string str;
		cin >> str;
		stack<char> s;

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == '(')
				s.push('(');
			else
			{
				if (s.empty())
				{
					s.push('s');
					break;
				}
				else
					s.pop();
			}	
		}

		if (s.empty())
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
}