#include<iostream>
#include<string>

using namespace std;

int main()
{
	int cnt = 0;
	string str;
	while (getline(cin, str))
	{
		if (str[0] == '#')
			break;

		cnt = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u')
				cnt++;
		}
		cout << cnt << endl;
	}
	
}