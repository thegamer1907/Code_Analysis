#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define eb emplace_back
#define all(a) begin(a), end(a)
#define has(a, b) (a.find(b) != a.end())
#define fora(i, n) for(int i = 0; i < n; i++)
#define forb(i, n) for(int i = 1; i <= n; i++)
#define forc(a, b) for(const auto &a : b)
#define ford(i, n) for(int i = n; i >= 0; i--)
#define maxval(t) numeric_limits<t>::max()
#define minval(t) numeric_limits<t>::min()
#define imin(a, b) a = min(a, b)
#define imax(a, b) a = max(a, b)

#define dbgs(x) #x << " = " << x
#define dbgs2(x, y) dbgs(x) << ", " << dbgs(y)
#define dbgs3(x, y, z) dbgs2(x, y) << ", " << dbgs(z)
#define dbgs4(w, x, y, z) dbgs3(w, x, y) << ", " << dbgs(z)

using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	ll h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	h *= 5;
	t1 *= 5;
	t2 *= 5;

	if (m != 0 || s != 0)
		++h;

	if (s != 0)
		++m;

	h %= 60;
	t1 %= 60;
	t2 %= 60;

	pair<int, int> a[] = { mp(h, 0), mp(m, 0), mp(s, 0), mp(t1, 1), mp(t2, 1) };
	sort(a, a + 5);

	vector<int> ix;

	fora(i, 5)
	{
		if (a[i].second == 1)
			ix.pb(i);
	}

	bool ok = false;

	if (abs(ix[0] - ix[1]) == 1)
		ok = true;

	if (ix[0] == 0 && ix[1] == 4)
		ok = true;

	if (ix[1] == 0 && ix[0] == 4)
		ok = true;

	if (ok)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}
