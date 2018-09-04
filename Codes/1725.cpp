#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstdio>
#include <functional>
using namespace std; 
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
const int INF = (((1<<30)-1)<<1)+1;
const int nINF = 1<<31;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<char, int> pci;

/////////////////////////////////////////////////////////////////////
ll n, m, k;

ll count(ll x) {
	// DEBUG(x);
	ll res = 0;
	FOR(i, 1, n) {
		if(x > m*i) continue;
		ll f = (x/i)*i;
		ll len = i*m-f+1;
		ll add = (len+i-1)/i - (f != x);
		res += add;
		// DEBUG(i);
		// DEBUG(f);
		// DEBUG(add);
	}
	return res;
}

int main() {
    ios::sync_with_stdio(false);
    //cout << fixed << setprecision(7);
    cin >> n >> m >> k;
    ll lo = 1, hi = n*m;
    k = n*m+1-k;
    while(lo < hi-1) {
    	ll mid = (lo+hi)/2;
    	if(count(mid) >= k) lo = mid;
    	else hi = mid-1;
    }
    if(hi-lo == 1) {
    	if(count(hi) >= k) cout << hi << endl;
    	else cout << lo << endl;
    } else {
    	cout << lo << endl;
    }

    return 0;
}