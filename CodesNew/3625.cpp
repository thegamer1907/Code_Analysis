#include <bits/stdc++.h>

#define ll unsigned long long
#define prl(c) cout<<(c)<<endl
#define fr(i, n) for(ll (i)=0; (i)<(n); (i)++)
#define fr1(i, l, n) for(ll (i)=(l); (i)<(n); (i)++)

#define vint vector<ll>
#define par pair<ll, ll>
#define pi M_PI

#define prll(c, d) cout<<(c)<<" "<<(d)<<endl
#define prp(c) cout<<(c)<<" "
#define br cout<<endl

#define jn ll n; cin>>n
#define jnm ll n, m; cin>>n>>m
#define js string s; cin>>s
#define cinv(a) fr(i,(a).si) cin>>(a)[i]
#define cinv0(a) fr(i,(a).si){cin>>(a)[i]; (a)[i]--;}
#define prv(v) fr(i,(v).si) prp((v)[i]); br

#define si size()
#define pb push_back
#define sord(fu) sort((fu).begin(), (fu).end())
#define rev(fu) reverse((fu).begin(), (fu).end())
#define binsr(fu, e) binary_search((fu).begin(), (fu).end(), (e))

#define danet(b) prl((b)?"YES":"NO")
#define iosync ios::sync_with_stdio(0)
#define stop return 0

using namespace std;
ll imax(vector<ll> a){
    ll m=0;
    fr1(i,1,a.si){
        if(a[i]>a[m]) m=i;
    }
    return m;
}
int main() {
	iosync;
	jnm; vint a(n); cinv(a);
	ll c=0,k=a[imax(a)];
	fr(i,n){
	    c+=k-a[i];
	}
	prl(c<m ? k+((m-c-1)/n+1) : k);
	prl(k+m);
	return 0;
}
