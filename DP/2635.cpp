#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;


bool good(int a)
{
	int sum = 0;
	do
	{
		sum += a % 10;
		a /= 10;
	} while (a);
	return sum == 10;
}


int main() {
	int64_t n, m, k, ans = 0, s = 0;
	cin >> n;

	for (int i = 1; i <= 100000000; ++i)
	{
		if (good(i))
		{
			--n;
			if (n == 0) {
				cout << i;
				return 0;
			}
		}
	}

	return 0;
}