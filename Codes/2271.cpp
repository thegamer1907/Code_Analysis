#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 10001000;
ll acc[N], spf[N];
bool p[N];
void sieve() {
	for(int i = 2; i < N; ++i) {
		if(p[i])continue;
		spf[i] = i;
		for(ll j = 1ll * i * i; j < N; j += i) {
			p[j] = 1;
			if(!~spf[j])spf[j] = i;
		}
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
	memset(spf, -1, sizeof spf);
	sieve();
	int n, m;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		int t, e;
		scanf("%d", &t);
		while(t > 1) {
			e = spf[t];
			acc[e]++;
			while(t % e == 0) t /= e;
		}
	}
	for(int i = 1; i < N; ++i)acc[i] += acc[i - 1];
	cin >> m;
	sieve();
	while(m--) {
		int l, r;
		scanf("%d %d", &l, &r);
		if(l >= N){ printf("0\n"); continue; }
		if(r >= N) r = N - 1;
		printf("%lld\n", acc[r] - acc[l - 1]);
	}

}
