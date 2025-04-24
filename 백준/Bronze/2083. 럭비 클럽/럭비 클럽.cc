#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	while (true)
	{
		string name;
		int age, weight;

		cin >> name >> age >> weight;
		if (name == "#" && age == 0 && weight == 0)
			break;

		if (age > 17 || weight >= 80)
			cout << name << " " << "Senior" << endl;
		else
			cout << name << " " << "Junior" << endl;
	}
}
