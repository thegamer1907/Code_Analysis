#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define pii pair<int, int> 
#define pll pair<long long int, long long int>
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)
#define fi first
#define sc second
#define deb 0

int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);

	string str;
	ll a, b, s, c, cb, cs, cc, i, j, k, start, mid, end, ans;
	ll rb, rs, rc, x, y, z, cost, money;

	cin >> str;
	rb = rs = rc = 0;
	for (i = 0; str[i]; ++i) {
		rb += (str[i] == 'B');
		rs += (str[i] == 'S');
		rc += (str[i] == 'C');
	}

	cin >> b >> s >> c;
	cin >> cb >> cs >> cc;
	cin >> money;

	start = 0;
	end = 1e14;

	while (start <= end) {
		mid = (start + end) / 2;
		cost = 0;
		cost += max(0ll, mid*rb - b) * cb;
		cost += max(0ll, mid*rs - s) * cs;
		cost += max(0ll, mid*rc - c) * cc;

		if (cost <= money) {
			ans = mid;
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}

	cout << ans << endl;

	return 0;
}	
