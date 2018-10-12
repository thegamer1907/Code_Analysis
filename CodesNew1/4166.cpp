#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define eb emplace_back
#define mk make_pair
#define fi first
#define se second

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

const int N = 2e5 + 5;
ll n, q, a[N], k[N], sum[N];

int main (void) {
	ios_base::sync_with_stdio(false);

	cin >> n >> q;

	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < q; i++)
		cin >> k[i];

	sum[0] = a[0];
	for(int i = 1; i < n; i++)
		sum[i] = sum[i-1] + a[i];

	ll at = 0;
	for(int i = 0; i < q; i++) {
		at += k[i];

		if(at >= sum[n-1]) {
			cout << n << endl;
			at = 0;
		} else {
			int j = upper_bound(sum, sum+n, at) - sum - 1;
			cout << n - (j + 1) << endl;
		}
	}

	return 0;
}
