#include <bits/stdc++.h>
using namespace std;
const int maxn = 2005;

int main()
{
	ios::sync_with_stdio(false);
	char a, b, t1, t2;
	cin >> a >> b;
	int n, f1 = 0, f2 = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t1 >> t2;
		if ((t1 == a && t2 == b) || (t1 == b && t2 == a))
		{
			cout << "YES\n";
			return 0;
		}
		else
		{
			if (t1 == b)
				f2 = 1;
			if (t2 == a)
				f1 = 1;
		}
	}
	if (f1 && f2)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
