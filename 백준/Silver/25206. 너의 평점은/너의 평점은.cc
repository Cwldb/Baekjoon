#include <iostream>
#include <deque>
#include <string>
#include <queue>
#include <iomanip>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);

    double totalWeighted = 0;
    double totalCredits = 0;

    for (int i = 0; i < 20; ++i) 
    {
        string subject, grade;
        double credit;
        cin >> subject >> credit >> grade;


        if (grade == "P") continue;

        double point = 0.0;

        if (grade == "A+")
            point = 4.5;

        else if (grade == "A0")
            point = 4.0;

        else if (grade == "B+")
            point = 3.5;

        else if (grade == "B0")
            point = 3.0;

        else if (grade == "C+")
            point = 2.5;

        else if (grade == "C0")
            point = 2.0;

        else if (grade == "D+")
            point = 1.5;

        else if (grade == "D0")
            point = 1.0;

        else if (grade == "F")
            point = 0.0;

        totalWeighted += credit * point;
        totalCredits += credit;
    }

    cout << fixed << setprecision(6);

    if (totalCredits > 0.0) 
    {
        cout << totalWeighted / totalCredits << "\n";
    }

    else 
    {
        cout << "0.000000\n";
    }
}
