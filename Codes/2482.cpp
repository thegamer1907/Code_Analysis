#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e7+2;
long long cnt[maxn], f[maxn], sum[maxn];
bool mark[maxn];

int main() {
	int n, x;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &x);
		cnt[x]++;
	}
	for(int i = 2; i < maxn; i++) if(!mark[i])
		for(int j = i; j < maxn; j+=i)
			f[i] += cnt[j], mark[j] = true;

	for(int i = 1; i <= maxn; i++) 
		sum[i] += sum[i-1] + f[i];
	int q;
	scanf("%d", &q);
	while(q--) {
		int l, r;
		scanf("%d %d", &l, &r);
		l = min(maxn-1, l), r = min(maxn-1, r);
		printf("%lld\n", sum[r] - sum[l-1]);
	}
	return 0;
}
