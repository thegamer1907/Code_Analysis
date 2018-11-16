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

const ll N = 2001, M = 1e9+7;
ll n, k, dp[N][N];

ll add(ll a, ll b) {return (a+b)%M;}

int main() {
    ios::sync_with_stdio(false);
    //cout << fixed << setprecision(7);
    cin >> k >> n;
    REP(i, n) {
    	FOR(j, 1, k) {
    		if(i == 0) dp[i][j] = 1;
    		else dp[i][j] = 0;
    	}
    }
    REP(i, n) {
    	FOR(j, 1, k) {
    		for(int num = 1; num*j <= k; ++num) {
    			dp[i+1][num*j] = add(dp[i+1][num*j], dp[i][j]);
    		}
    	}
    }
    ll ans = 0;
    FOR(i, 1, k) ans = add(ans, dp[n-1][i]);
    cout << ans << endl;

    return 0;
}