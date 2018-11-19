#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main ()
{
	ios::sync_with_stdio(false);
	double h, m, r, t1, t2;
	cin >> h >> m >> r >> t1 >> t2;


	// degree positions of the hands

	double hp, mp, sp, t1p, t2p;

	t1p = t1 / 12 * 360;
	t2p = t2 / 12 * 360;

	sp = r / 60 * 360;

	mp = (m + r/60) / 60 * 360;

	hp = (h + (m + r/60)/60) / 12 * 360;

	vector<double> s;

	s.push_back(t1p);
	s.push_back(t2p);
	s.push_back(hp);
	s.push_back(mp);
	s.push_back(sp);

	sort(s.begin(), s.end());


	if (s[0] == t1p && s[4] == t2p)
	{
		cout << "YES";
		return 0;
	}

	if (s[4] == t1p && s[0] == t2p)
	{
		cout << "YES";
		return 0;
	}

	for (int i = 0; i < 4; ++i)
	{
		if (s[i] == t1p)
		{
			if (s[i+1] == t2p)
			{
				cout << "YES";
				return 0;
			}
		}

		if (s[i] == t2p)
		{
			if (s[i+1] == t1p)
			{
				cout << "YES";
				return 0;
			}
		}
	}

	cout << "NO";

	return 0;
}