#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)
#define pb push_back
#define mp make_pair

typedef long long ll;

const int N = 5e6 + 5;
const ll inf = 1791791791;
const ll mod = 1e9+7;

ll s[N];

int main() {
	int n, q; scanf("%d %d", &n, &q);
	ll sum = 0;
	for (int i=0;i<n;i++) {
		scanf("%lld", &s[i]);
		s[i] += sum;
		sum = s[i];
	}
	ll force = 0;
	while (q--) {
		ll k; scanf("%lld", &k);
		force += k;
		int pos = upper_bound(s, s+n, force) - s;
		if (pos == n) {
			force = 0;
			printf("%d\n", n);
		} else {
			printf("%d\n", n-pos);
		}
	}
    return 0;
}