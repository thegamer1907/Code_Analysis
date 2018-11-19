#include <bits/stdc++.h>
#define fr(x) scanf("%d", &x)
using namespace std;

int a[100010], cnt[45];

signed main(){
	int n, k, ans = 0;
	fr(n);
	fr(k);
	for(int i=1; i<=n; ++i) {
		int temp;
		for(int j=0; j<k; ++j) {
			fr(temp);
			a[i] ^= (temp<<j);
		}
		++cnt[a[i]];
	}
	if(cnt[0]) {
		cout<<"YES";
		return 0;
	}
	for(int i=0; i<(1<<k); ++i) {
		for(int j=0; j<(1<<k); ++j) {
			if((i & j) == 0) {
				--cnt[i];
				--cnt[j];
				if(cnt[i] >= 0 && cnt[j]>=0) ans = 1;
				++cnt[i];
				++cnt[j];
			}
		}
	}
	if(ans) cout<<"YES";
	else cout<<"NO";
	return 0;
}