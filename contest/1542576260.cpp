#include "bits/stdc++.h"
using namespace std;
int n, k, a[100001];
int cnt[16];
int main() {
	scanf("%d%d", &n, &k);
	for(int i=0; i<n; i++) {
		int sum = 0;
		for(int j=0,x; j<k; j++) scanf("%d", &x), sum=2*sum+x;
		a[i] = sum;
		cnt[sum]++;
	}
	for(int i=0; i<n; i++) {
		bool f = 0;
		for(int j=0; j<(1<<k); j++) {
			if(!cnt[j]) continue;
			int t1 = a[i];
			int t2 = j;
			bool g = 1;
			for(int t=0; t<k; t++, t1 >>= 1, t2 >>= 1)
				if((t1 & 1) == 1 && (t2 & 1) == 1)
					g = 0;
			if(g) f = 1;
		}
		if(f) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}