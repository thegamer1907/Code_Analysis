#include <bits/stdc++.h>

using namespace std;

int n;
long long sum = 0;
vector<long long> a;

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		sum += x;
		a.push_back(sum);
	}
	int p = lower_bound(a.begin(), a.end(), sum/2) - a.begin();
	int q = p;
	//cout << "p:" << p << endl;
	//cout << "q:" << q << endl;
	while (0 <= p && q < n)
	{
		long long now = a[p] + a[q];
		//cout << "now: " << now << endl;
		if (now > sum)
			--p;
		else if (now == sum)
		{
			cout << a[p] << endl;
			return 0;
		}
		else
			++q;
	}
	cout << 0 << endl;
	return 0;
}
