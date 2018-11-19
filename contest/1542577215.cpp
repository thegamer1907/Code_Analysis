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

int n, k;
ll D[22][100010];
int A[100010];
int AS[100010];
ll now;

void Do(int x, int l, int r, int s, int e) {
	int m = (s + e) >> 1;
	vector <int> pl, ml;
	for(int i=s;i<=m;i++) {
		now += AS[A[i]]++;
		pl.pb(A[i]);
	}
	D[x][m] = D[x-1][l] + now;
	int f = l;
	for(int i=l+1;i<=r && i<m;i++) {
		now -= --AS[A[i]];
		ml.pb(A[i]);
		if(D[x][m] > D[x-1][i] + now) D[x][m] = D[x-1][i] + now, f = i;
	}
	for(int e : ml) now += AS[e]++;
	for(int e : pl) now -= --AS[e];
	if(s<m) Do(x, l, f, s, m-1);
	if(m<e) {
		for(int i=s;i<=m;i++) now += AS[A[i]]++;
		for(int i=l+1;i<=f;i++) now -= --AS[A[i]];
		Do(x, f, r, m+1, e);
		for(int i=l+1;i<=f;i++) now += AS[A[i]]++;
		for(int i=s;i<=m;i++) now -= --AS[A[i]];
	}
}

void solve() {
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++) scanf("%d", A+i);
	ll cnt = 0;
	for(int i=1;i<=n;i++) {
		cnt += AS[A[i]];
		AS[A[i]]++;
		D[1][i] = cnt;
	}
	for(int i=2;i<=k;i++) {
		now = 0;
		memset(AS, 0, sizeof AS);
		Do(i, 0, n, 1, n);
	}
	printf("%lld\n", D[k][n]);
}

int main(){
	int Tc = 1; // scanf("%d\n", &Tc);
	for(int tc=1;tc<=Tc;tc++){
		// printf("Case #%d: ", tc);
		solve();
	}
	return 0;
}