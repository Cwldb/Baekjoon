#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() 
{
	int n;
	cin >> n;
	stack<char> s;

	for (int i = 0; i < n; i++)
	{
		char c;
		cin >> c;
		s.push(c);
	}

	for (int i = 0; i < n - 1; i++)
	{
		string answer;
		answer += s.top();
		s.pop();
		answer += s.top();
		s.pop();

		if (answer == "AA" || answer == "CA" || answer == "AC" || answer == "TG" || answer == "GT")
			s.push('A');
		else if (answer == "AG" || answer == "GA" || answer == "CC")
			s.push('C');
		else if (answer == "TA" || answer == "TC" || answer == "AT" || answer == "CT" || answer == "GG")
			s.push('G');
		else if (answer == "TT" || answer == "CG" || answer == "GC")
			s.push('T');
	}
	
	cout << s.top();
}

