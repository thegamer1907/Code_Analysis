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

const ll N = 5e5;
ll n, a[N];

int main() {
    ios::sync_with_stdio(false);
    //cout << fixed << setprecision(7);
    cin >> n;
    REP(i, n) cin >> a[i];
    ll s = 0, cur = 0, ones = 0, ans = 0;
    REP(i, n) s += a[i];
    if(s % 3) {
    	cout << 0 << endl;
    	exit(0);
    }
    s /= 3;
    REP(i, n-1) {
    	cur += a[i];
    	if(cur == 2*s) ans += ones;
    	if(cur == s) ++ones;
    }
    cout << ans << endl;

    return 0;
}