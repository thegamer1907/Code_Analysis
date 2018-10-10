#include <bits/stdc++.h>

using namespace std;

#define sz(c)		  (int)(c).size()
#define all(c)		  ((c).begin()), ((c).end())
#define rep(c, s, n)  for (int (c) = (s); (c) < (n); ++(c))
#define repd(c, n, s) for (int (c) = (n); (c) > (s); --(c))

typedef long long ll;
typedef pair<int, int> pii;
const int oo = (int)1e9+9;

int main() 
{
	int n, d;
	cin >> n >> d;

	vector< pair<int, int> > p(n);

	rep(i, 0, n)
		cin >> p[i].first >> p[i].second;

	sort(all(p));

	int l = 0;
	ll ans = -oo;
	ll total = 0;

	for (int r = 0; r < n; r++)
	{
		while (p[r].first - p[l].first >= d)
		{
			total -= p[l].second;
			++l;
		}

		total += p[r].second;
		ans = max(ans, total);
	}

	cout << ans;

	return 0;
}