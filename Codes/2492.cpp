#include <bits/stdc++.h>
using namespace std;

#define int long long
#define wait() system("pause")

const int maxi = 1e7+5;
const int maxn = 1e6+5;

bool flag[maxi]; int foo[maxi];
int cnt[maxi]; int pre[maxi];

int32_t main () {
	int n; scanf("%lld", &n);
	for(int i=1; i<=n; i++) {
		int x; scanf("%lld", &x); cnt[x]++;
	}
	for(int i=2; i<=10000000; i++) {
		if(flag[i] == 1) continue;
		for(int j=0; j<=10000000; j+=i) {
			foo[i]+=cnt[j]; flag[j] = 1;
		}
	}
	for(int i=1; i<=10000000; i++) {
		pre[i] = pre[i-1] + foo[i];
	}
	int m; scanf("%lld", &m);
	for(int i=1; i<=m; i++) {
		int l, r; scanf("%lld%lld", &l, &r);
		r = min(r, 10000000LL);
		if(l>10000000) puts("0");
		else printf("%lld\n", pre[r]-pre[l-1]);
	}
	//wait();
	return 0;
}