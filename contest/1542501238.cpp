#include <cstdio>
//#include <bits/stdc++.h>
#define maxn 100010

//using namespace std;
int a[maxn][4], ci[maxn];
int cnt[16], cj[4];

int main() {

	int n, k;
	
	scanf("%d%d", &n, &k);
	int minci = k;
	for(int i = 1; i <= n; i++) {
		int h = 0;
		for(int j = 0; j < k; ++j) {
			scanf("%d", a[i] + j);
			if(a[i][j]) ++cj[j], ++ci[i], h += (1 << j);
		}
		cnt[h]++;
		if(ci[i] < minci) minci = ci[i];
	}
	
	bool ans = false;
	for(int i = 0; i < (1 << k); ++i) {
		for(int j = 0; j < (1 << k); ++j) {
			if(cnt[i] && cnt[j]) {
				if((i & j) == 0) ans = true;
			}
		}
	}
	
	printf(ans ? "YES" : "NO");
	return 0;
}
