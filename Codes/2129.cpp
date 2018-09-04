#include <iostream>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>
#include <stack>
#include <sstream>
#include <vector>
#include <string>
#include <list>
#include <map>
#include <cstdio>
//#define mp make_pair
#define pb push_back
#define ll long long
#define vc vector
#define in ll
#define pll pair<ll,ll>
#define pii pair<int,int>
#define all(x) x.begin(), x.end()
#define loop(xxx, yyy) for(int xxx = 0; xxx < yyy; xxx++)
using namespace std;

using namespace std;

ll n, k;
map<ll, vector<ll>> mp;
vector<ll> a;
int main() {
	scanf("%lld%lld", &n, &k);
	a.resize(n);
	loop(i, n) {
		scanf("%lld", &a[i]);
		mp[a[i]].push_back(i);
	}
	ll res = 0;
	for (ll i = 1; i < n - 1; i++) {
		if (a[i] % k == 0) {
			ll l = a[i] / k;
			ll r = a[i] * k;

			if (mp[l].empty() || mp[r].empty()) continue;

			ll nl;
			if (mp[l].front() > i)	nl = 0;
			else {

				nl = lower_bound(all(mp[l]), i) - mp[l].begin();
			}

			ll nr = mp[r].end() - upper_bound(all(mp[r]), i);

			res += nl*nr;
		}
	}
	printf("%lld\n", res);
	return 0;
}
