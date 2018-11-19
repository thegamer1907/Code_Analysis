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

int c[16];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	fora(i, n)
	{
		int l = 0;
		fora(j, k)
		{
			char x;
			cin >> x;
			l = 2 * l + (x - '0');
		}
		++c[l];
	}

	fora(ref, 16)
	{
		if (c[ref] == 0)
			continue;

		//int want = ~ref;

		fora(hav, 16)
		{
			if (((hav & ref) != 0) || c[hav] == 0)
				continue;

			cout << "yes" << endl;
			return 0;
		}
	}

	cout << "no" << endl;
}
