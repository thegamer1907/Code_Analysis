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

int n, m;
vector <pii> E[55];
int s, T[55];
int D[55][55];
int dis[55][55];
vector <int> leaf;

int Do(int A, int x) {
	int low = 1, high = 1e9, res = -1;
	while(low <= high) {
		int mid = (low + high) >> 1;
		int cnt = 0;
		for(int e : leaf) if(e != x) {
			int f = A;
			for(int i=0;i<A;i++) if(D[i][e] + dis[x][e] > mid) {
				f = i; break;
			}
			cnt += A - f;
		}
		if(cnt >= A) low = mid + 1;
		else res = mid, high = mid - 1;
	}
	return res;
}

int S[55];

void solve() {
	scanf("%d", &n);
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) dis[i][j] = (i == j ? 0 : 1e9);
	rep(i, n-1) {
		int x, y, z; scanf("%d%d%d", &x, &y, &z);
		E[x].pb(pii(z, y));
		E[y].pb(pii(z, x));
		dis[x][y] = dis[y][x] = z;
	}
	for(int i=1;i<=n;i++) if(sz(E[i]) == 1) leaf.pb(i);
	for(int k=1;k<=n;k++) for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
	scanf("%d%d", &s, &m);
	for(int i=1;i<m;i++) {
		for(int j=1;j<=n;j++) {
			D[i][j] = Do(i, j);
		}
	}
	int low = 1, high = 1e9, res = -1;
	for(pii e : E[s]) {
		int u = e.Se;
		for(int i=1;i<=n;i++) {
			if(dis[s][u] + dis[u][i] == dis[s][i]) {
				S[i] = u;
			}
		}
	}
	for(int i=1;i<=m;i++) {
		int x; scanf("%d", &x);
		T[S[x]]++;
	}
	while(low <= high) {
		int mid = (low + high) >> 1;
		int cnt[55] = {};
		for(int e : leaf) {
			int f = m;
			for(int i=0;i<m;i++) if(D[i][e] + dis[s][e] > mid) { f = i; break; }
			cnt[S[e]] += m - f;
		}
		int ok = 1;
		for(pii e : E[s]) if(T[e.Se] > cnt[e.Se]) ok = 0;
		if(ok) low = mid + 1;
		else res = mid, high = mid - 1;
	}
	printf("%d\n", res);
}

int main(){
	int Tc = 1; //scanf("%d\n", &Tc);
	for(int tc=1;tc<=Tc;tc++){
		// printf("Case #%d: ", tc);
		solve();
	}
	return 0;
}