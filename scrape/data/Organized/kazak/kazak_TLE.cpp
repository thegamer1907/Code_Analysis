#include <bits/stdc++.h>
#define ll long long
#define prl(c) cout<<(c)<<endl
#define al(fu) (fu).begin(), (fu).end()
#define alr(fu) (fu).rbegin(), (fu).rend()
#define fr(i, l, n) for(auto (i)=(l); (i)<(n); (i)++)
#define mod 1000000007
#define pi 3.14159265359
#define prv(v) fr(z,0,v.size()) cout<<(v)[z]<<' '
#define iosync ios::sync_with_stdio(0)
using namespace std;

int main(){
    iosync;
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> a(m);
    fr(i,0,m) cin>>a[i];
    fr(i,0,m) a[i]--;

    ll l=0,t=1,c=0;
    auto p=a.begin();
    while(p!=a.end()){
        auto bp=lower_bound(al(a),k*t+l);
        if(bp==p){
            t++;
            continue;
        }
        l+=(ll)(bp-p);
        p=bp;
        c++;
    }

    prl(c);
    return 0;
}