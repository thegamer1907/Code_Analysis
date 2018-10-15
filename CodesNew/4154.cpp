#include<bits/stdc++.h>

#define pb push_back
#define rep(i, a, n) for(int (i)=a; (i)<(n); (i)++)
#define FOR(i, n) rep(i, 0, n)
#define F(n) FOR(i, n)
#define FF(n) FOR(j, n)
#define repi(i, a, n) for(int (i)=a; (i)<=(n); (i)++)
#define FORI(i, n) repi(i, 1, n)
#define FI(n) FORI(i, n)
#define FFI(n) FORI(j, n)
#define IN(x) int x; cin>>(x);
#define SIN(x) string x; cin>>(x);
#define INN(x, y) int x, y; cin>>(x)>>(y);
#define INFO(a) cout<<"info "<<a<<endl
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define vpii vector<pair<int, int> >
#define sortv(x) sort((x).begin(), (x).end())
#define sortvd(x) sort((x).begin(), (x).end(), greater<int>())
#define lboundv(x,v) lower_bound((x).begin(),(x).end(),(v))-(x).begin();
#define uboundv(x,v) upper_bound((x).begin(),(x).end(),(v))-(x).begin();
#define ite iterator
#define fi first
#define se second
#define mems(a, v) memset((a), (v), sizeof((a)))
#define lmid(l, r) ((l)+(r)-1)/2
#define rmid(l, r) ((l)+(r))/2+1
#define mp make_pair

typedef long long ll;
typedef long double LD;

using namespace std;

#define N 200005

int n, q;
vll a(N), k(N), s(N);ll cur, pos, dm;

int find(ll p) {
    int in;
    //if(!pos) in = lower_bound(s+pos, s+n, *p);
    //p += (pos>0 ? s[pos-1]:0ll);
    //cout<<"find "<<p<<endl;
    in = upper_bound(s.begin(), s.begin()+n, p) - s.begin();
    //cout<<"in "<<in<<endl;
    in--;
    in = max(in, 0);
    if(in>=n-1) {
        cur = 0;
        pos = 0;
        dm = 0;
        return n;
    }
    else if(s[in]>p) {
        dm = p;
        pos = in;
        return n-(pos);
    }
    else {
        dm = p;
        pos = in+1;
        return n-(in+1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin>>n>>q;
    F(n) cin>>a[i];
    F(q) cin>>k[i];
    s[0] = a[0];
    FI(n-1) s[i] = s[i-1]+a[i];
    F(q) {
        ll ans = find(k[i]+dm);
        cout<<ans<<endl;
        //cout<<dm<<' '<<pos<<endl;
    }
    return 0;
}
