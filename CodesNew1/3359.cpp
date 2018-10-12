#include <iostream>
#include <cmath>
#include <algorithm>
long num[105];
using namespace std;
int main()
{
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	int sum = m;
	for (int i = 0; i != n; ++i)
		scanf("%d", &num[i]);
	sort(num, num + n);
	//cout << (sum + m) / n << endl;
	for (int i = 0; i != n - 1; ++i)
	{
		m -= num[n - 1] - num[i];
		if (m <= 0)
			return cout << num[n - 1] << " " << num[n - 1] + sum << endl, 0;
		//cout << "m=" << m << endl;
	}
	//cout << "m=" << m << endl;
	if (m%n)
		cout << num[n - 1] + m / n + 1 << " " << num[n - 1] + sum << endl;
	else
		cout << num[n - 1] + m / n << " " << num[n - 1] + sum << endl;
	return 0;
}