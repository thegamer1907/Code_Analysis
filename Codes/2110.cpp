#include <bits/stdc++.h>

using namespace std;

const int N = 1000007; //10e6

#define ll long long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define all(x) (x).begin(), (x).end()

vector <ll> vec;
map <ll, ll> cnt, valid;

/*10 3
1 2 6 2 3 6 9 18 3 9*/

int main() {
	int n, k;

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		ll x;
		scanf("%lld", &x);
		vec.pb(x);
	}

	ll ans = 0;
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] % k == 0) {
			ans += valid[vec[i] / k];
			valid[vec[i]] += cnt[vec[i] / k];
		}
		cnt[vec[i]]++;
	}

	printf("%lld\n", ans);

	return 0;
}