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
const int N = 1e5+1;
int n, m, c[N], h = 0, l = INF;
set<int> s[N];

int main() {
    ios::sync_with_stdio(false);
    //cout << fixed << setprecision(7);
    cin >> n >> m;
    FOR(i, 1, n) {
    	cin >> c[i];
    	h = max(h, c[i]);
    	l = min(l, c[i]);
    }
    while(m--) {
    	int a, b;
    	cin >> a >> b;
    	int ca = c[a], cb = c[b];
    	if(ca != cb) {
	    	s[ca].insert(cb);
	    	s[cb].insert(ca);
    	}
    }
    int ans = l;
    FOR(i, l, h) if(s[i].size() > s[ans].size()) ans = i;
    cout << ans << endl;

    return 0;
}