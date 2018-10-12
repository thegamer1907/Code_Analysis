#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const int siz = 1e5 + 10;
const ll modu = 1e9 + 7;

ll arr[siz];

ll check(ll ind, int n, ll x) {
	ll arr1[n];
	for(int i = 0; i < n; i++) {
		ll temp = arr[i];
		ll i1 = i + 1;
		temp += (i1 * ind);
		arr1[i] = temp;
	}
	sort(arr1, arr1 + n);
	ll tot = 0;
	for(int i = 0; i < ind; i++)
		tot += arr1[i];
	return tot;
}

int lower_bound(int n, ll x) {
	int l = 0;
	int h = n; // Not n - 1
	while(l < h) {
		int mid = (l + h) / 2;
		if(check(mid + 1, n, x) <= x)
			l = mid + 1;
		else
			h = mid;
	}
	return l;
}

int main() {
	int n;
	ll s;
	scanf("%d%lld", &n, &s);
	for(int i = 0; i < n; i++)
		scanf("%lld", &arr[i]);
	int ind = lower_bound(n, s);
	printf("%d %lld\n", ind, check(ind, n, s));
	return 0;
}