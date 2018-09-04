#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll INF = (ll)1e18;
int n[3], p[3], req[3];
ll rubles;
char s[105];

ll total(ll x) {
	return max(0LL, (ll)p[0]*(x*(ll)req[0]-(ll)n[0])) + max(0LL, (ll)p[1]*(x*(ll)req[1]-(ll)n[1])) + max(0LL, (ll)p[2]*(x*(ll)req[2]-(ll)n[2]));
}

int main() {
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (s[i] == 'B') req[0]++;
		else if (s[i] == 'S') req[1]++;
		else if (s[i] == 'C') req[2]++;
	}
	for (int i = 0; i < 3; i++) scanf("%d", &n[i]);
	for (int i = 0; i < 3; i++) scanf("%d", &p[i]);
	scanf("%lld", &rubles);

	ll l = 0LL, r = (ll)1e12+105, mid;
	for (int i = 0; i < 50; i++) {
		mid = (l+r)/2LL;
		ll totalprice = total(mid);
//		printf(">> %lld %lld\n", mid, totalprice);
		if (totalprice <= rubles && total(mid+1) > rubles) break;
		else if (totalprice <= rubles) l = mid+1;
		else r = mid-1;
	}
	
	printf("%lld\n", mid);

	return 0;	
}
