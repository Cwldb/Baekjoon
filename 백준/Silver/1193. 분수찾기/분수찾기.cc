#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int line = 1, input;
    cin >> input;

    while (input > line)
    {
		input -= line;
        line++;
    }

    if (line % 2 == 1)
		cout << line + 1 - input << '/' << input << "\n";
    else
		cout << input << '/' << line + 1 - input << "\n";
}
