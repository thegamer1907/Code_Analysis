#include <bits/stdc++.h>

#define ui unsigned int
#define ll long long
#define prl(c) cout<<(c)<<endl
#define bee(fu) (fu).begin(), (fu).end()
#define fr(i, n) for(ui (i)=0; (i)<(n); (i)++)
#define fl(i, l, n) for(ui (i)=(l); (i)<(n); (i)++)

#define vint vector<ll>
#define vui vector<ui>
#define pi M_PI
#define prll(c, d) cout<<(c)<<" "<<(d)<<endl
#define prp(c) cout<<(c)<<" "
#define br cout<<endl

#define jn ui n; cin>>n
#define jnm ui n,m; cin>>n>>m
#define js string s; cin>>s
#define cinv(a) fr(z,(a).si) cin>>(a)[z]
#define prv(v) fr(z,(v).si) prp((v)[z]); br

#define si size()
#define pb push_back
#define mp make_pair
#define danet(b) prl((b)?"YES":"NO")
#define iosync ios::sync_with_stdio(0)
#define stop return 0

using namespace std;
ll kor(ll x){
    ll r=(ll)sqrt(x);
    if((r+1)*(r+1)==x) r++;
    return r;
}
ll step(ll b,ui p){
    ll s=1;
    fr(i,p) s*=b;
    return s;
}
ll mdl(ll a){
    return (a<0) ? -a : a;
}

int main() {
    jnm; vint a(n),l(m),c(n); cinv(a);cinv(l);
    set<ll> sew;
    for(ui i=n; i>0;i--){
        sew.insert(a[i-1]);
        c[i-1]=sew.size();
    }
    fr(i,m) cout<<c[l[i]-1]<<endl;
}