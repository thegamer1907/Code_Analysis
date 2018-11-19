#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int imax = INT_MAX;
int imin = INT_MIN;
ll llmax = LLONG_MAX;
ll llmin = LLONG_MIN;

int  main()
{
	int h, m, s;
	cin >> h >> m >> s;
	int t1, t2;
	cin >> t1 >> t2;
	h %= 12;
	h += 1;
	m = (m / 5 + 1)%12;
	s = (s / 5 + 1)%12;
	t1 %= 12;
	t2 %= 12;
	bool f1 = true;
	for (int i = min(t1, t2) + 1; i <= max(t1, t2); i++)
		if (h == i || m == i || s == i)
		{
			f1 = false;
			break;
		}
	if (f1)
		cout << "YES" << endl;
	else
	{
		f1 = true;
		for (int i = max(t1, t2) + 1; i <= 11; i++)
			if (h == i || m == i || s == i)
			{
				f1 = false;
				break;
			}
		for (int i = 0; i <= min(t1, t2); i++)
			if (h == i || m == i || s == i)
			{
				f1 = false;
				break;
			}
		if (f1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}