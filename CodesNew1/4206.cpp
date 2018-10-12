#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;
long long a[maxn];
long long sum[maxn];
long long b[maxn];
int main() {
	int n=0;
	int q= 0;
	scanf("%d %d", &n, &q);
	
	for(int i=0;i<n;i++) {
		scanf("%lld", &a[i]);
		sum[i+1] = sum[i] + a[i];
	}
	a[n] = (long long) 1e15;
	sum[n+1] = sum[n] + a[n];
	int l = 0;
	long long bu = 0;
	for(int i=0;i<q;i++) {
		long long x;
		scanf("%lld", &x);
		int r = n;
		int L = l;
		int pos = -1;
		while (l<=r) {
			int g = (l+r) >> 1;
			long long t = sum[g+1] - sum[L] - bu;
			if (t > x) {
				pos = g;
				r = g-1;	
			} else l = g+1;
		}
		if (pos == n) {
			printf("%d\n", n);
			l = 0;
			bu = 0;
		} else {
			printf("%d\n", n-pos);
			bu = a[l] - (sum[pos+1] - sum[L] - bu - x);
			l = pos;
		}
	}

}
