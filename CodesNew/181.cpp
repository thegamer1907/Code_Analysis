#include <iostream>
#include <string>
#include <vector>
using namespace std;

//dùng two pointers

int main()
{
	int n, t, temp, countPre = 0, sum = 0, left = 0, countPresent = 0;
	string tempS;
	vector<int> a;
	cin >> n;
	cin >> t;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		a.push_back(temp);
		sum += a[i];
		if (sum > t || i == n - 1)
		{
			if (sum <= t)
				countPresent++;
			if (countPresent > countPre)
			{
				countPre = countPresent;
			}
			sum -= a[left];
			left++;
			continue;
		}
		countPresent++;
	}

	cout << countPre;

	return 0;
}