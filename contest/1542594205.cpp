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

void solve() {
	char A[3]; scanf("%s", A);
	int n; scanf("%d", &n);
	char B[120][3];
	rep(i, n) scanf("%s", B[i]);
	int ok = 0;
	rep(i, n) if(B[i][0] == A[0] && B[i][1] == A[1]) ok = 1;
	rep(i, n) rep(j, n) if(B[i][1] == A[0] && B[j][0] == A[1]) ok = 1;
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