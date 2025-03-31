#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n)
{
	vector<int> answer;
	int result = 0;

	while (n / 10 > 0)
	{
		long long a = n % 10;
		n /= 10;
		answer.push_back(a);
	}
	long long a = n % 10;
	n /= 10;
	answer.push_back(a);

	return answer;
}