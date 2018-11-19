#include <bits/stdc++.h>
using namespace std;

int main()
{
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	double hd, md, sd, t1d, t2d;
	sd = s / 60.0;
	md = (m + sd) / 60.0;
	hd = (h + md) / 12.0;
	t1d = t1 / 12.0;
	t2d = t2 / 12.0;
	vector<long double> tim = {hd, md, sd, t1d, t2d};
	sort(tim.begin(), tim.end());
    for (int i = 0; i < 4; ++i)
	{
		if ((tim[i] == t1d || tim[i] == t2d) && (tim[i+1] == t1d || tim[i+1] == t2d))
		{
			cout << "YES\n";
			return 0;
		}
	}
	if ((tim[0] == t1d || tim[0] == t2d) && (tim[4] == t1d || tim[4] == t2d))
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}