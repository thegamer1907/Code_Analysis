#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <math.h>
#include <assert.h>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <iostream>
#include <functional>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <bitset>

using namespace std;
typedef pair<int, int> pii;
typedef long long ll;
#define Fi first
#define Se second
#define pb(x) push_back(x)
#define sz(x) ((int)(x).size())
#define rep(i, n) for(int i=0;i<n;i++)
#define all(x) (x).begin(), (x).end()
typedef tuple<int, int, int> t3;
typedef pair<ll, ll> pll;
typedef long double ldouble;
typedef pair<double, double> pdd;

int L[220][13][1<<12];
string pre[220], suf[220];

void solve() {
	int n, m; scanf("%d", &n);
	string S[110];
	for(int i=1;i<=n;i++) {
		char buf[110]; scanf("%s", buf);
		S[i] = (string)buf;
		for(int j=0;j<sz(S[i]) && j<12;j++) pre[i].pb(S[i][j]);
		for(int j=0;j<sz(S[i]) && j<12;j++) suf[i].pb(S[i][sz(S[i])-1-j]);
		reverse(all(suf[i]));
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=12;j++) {
			for(int k=0;k+j<=sz(S[i]);k++) {
				int cnt = 0;
				for(int u=0;u<j;u++) {
					int c = (S[i][k+u] - '0');
					cnt |= c << u;
				}
				L[i][j][cnt] = 1;
			}
		}
	}
	scanf("%d", &m);
	for(int q=1;q<=m;q++) {
		int a, b; scanf("%d%d", &a, &b);
		for(int j=1;j<=12;j++) for(int k=0;k<1<<j;k++) L[n+q][j][k] = (L[a][j][k] | L[b][j][k]);
		for(int j=1;j<=12;j++) {
			for(int r=1;r<j;r++) {
				int lv = r, rv = j - r;
				if(sz(suf[a]) < lv || sz(pre[b]) < rv) continue;
				int cnt = 0;
				for(int u=sz(suf[a])-lv;u<sz(suf[a]);u++) {
					int c = (suf[a][u] - '0');
					cnt |= c << (u - (sz(suf[a])-lv));
				}
				for(int u=0;u<rv;u++) {
					int c = (pre[b][u] - '0');
					cnt |= c << (u + lv);
				}
				L[n+q][j][cnt] = 1;
			}
		}
		pre[n+q] = pre[a] + pre[b];
		while(sz(pre[n+q]) > 12) pre[n+q].pop_back();
		if(sz(suf[b]) == 12) suf[n+q] = suf[b];
		else {
			int temp = 12 - sz(suf[b]);
			for(int i=max(0, sz(suf[a])-temp);i<sz(suf[a]);i++) suf[n+q].pb(suf[a][i]);
			suf[n+q] = suf[n+q] + suf[b];
		}
		int ans = 0;
		for(int i=1;i<=12;i++) {
			int ok = 1;
			rep(j, 1<<i) if(L[n+q][i][j] == 0)  { ok = 0; break; }
			if(ok) ans = i;
			else break;
		}
		printf("%d\n", ans);
	}
}

int main(){
	int Tc = 1; //scanf("%d\n", &Tc);
	for(int tc=1;tc<=Tc;tc++){
		// printf("Case #%d: ", tc);
		solve();
	//	if(tc % 20000 == 0) fprintf(stderr, "%d\n", tc);
	}
	return 0;
}