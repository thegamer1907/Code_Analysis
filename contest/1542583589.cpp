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

int A[16];

void solve() {
	int n, k; scanf("%d%d", &n, &k);
	rep(i, n) {
		int c = 0;
		rep(j, k) {
			int x; scanf("%d", &x);
			c |= x<<j;
		}
		A[c] = 1;
	}
	int ok = 0;
	rep(i, 1<<k) rep(j, 1<<k) {
		if(A[i] && A[j]) {
			if((i&j) == 0) ok = 1;
		}
	}
	puts(ok ? "YES" : "NO");
}

int main(){
	int Tc = 1; // scanf("%d\n", &Tc);
	for(int tc=1;tc<=Tc;tc++){
		// printf("Case #%d: ", tc);
		solve();
	}
	return 0;
}