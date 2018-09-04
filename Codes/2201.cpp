#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

using pll = pair<ll, ll>;
using vll = vector<ll>;
using vpll = vector<pll>;
using gr = vector<vll>;
using wgr = vector<vpll>;

#define pb push_back
#define FOR(i, m, n) for (ll i(m); i < n; i++)
#define REP(i, n) FOR(i, 0, n)
#define F(n) REP(i, n)
#define FF(n) REP(j, n)
struct d_ {
    template<typename T> d_ & operator ,(const T & x) { cerr << ' ' <<  x; return *this;}
    template<typename T> d_ & operator ,(const vector<T> & x) { for(auto x: x) cerr << ' ' <<  x; return *this;}
} d_t;
#define dbg(args ...) { d_t,"|",__LINE__,"|",":",args,"\n"; }
#define EPS (1e-10)
#define INF (1LL<<61)
#define CL(A,I) (memset(A,I,sizeof(A)))
#define all(x) begin(x),end(x)
#define IN(n) ll n;cin >> n;
#define x first
#define y second

int main(void) {
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    vll v(n);
    F(n) {
        cin >> v[i];
        if(i) v[i]+=v[i-1];
    }
    ll ret = 0;
    ll j = n-1;
    F(n) {
        ll cur = v[i];
        while(j>i && v[n-1]-v[j-1] < cur) j--;
        if(i==j)break;
        if(cur == v[n-1]-v[j-1]) ret = max(ret, cur);
    }
    cout << ret << endl;
    return 0;
}
