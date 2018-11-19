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

int len(int x, int y) { return y >= x ? y-x : y-x+3600*12; }

int ok(int s, int e, int x) {
	return len(s, x) + len(x, e) != len(s, e);
}

void solve() {
	int a, b, c, t1, t2; scanf("%d%d%d%d%d", &a, &b, &c, &t1, &t2);
	a %= 12, t1 %= 12, t2 %= 12;
	int ta = a * 3600 + b * 60 + c;
	int tb = (b * 60 + c) * 12;
	int tc = 60 * 12 * c;
	t1 *= 3600, t2 *= 3600;
	int g = 0;
	if(ok(t1, t2, ta) && ok(t1, t2, tb) && ok(t1, t2, tc)) g = 1;
	if(ok(t2, t1, ta) && ok(t2, t1, tb) && ok(t2, t1, tc)) g = 1;
	puts(g ? "YES" : "NO");
}

int main(){
	int Tc = 1; // scanf("%d\n", &Tc);
	for(int tc=1;tc<=Tc;tc++){
		// printf("Case #%d: ", tc);
		solve();
	}
	return 0;
}