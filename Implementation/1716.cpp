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
#define cinv(a) fr(i,(a).si) cin>>(a)[i]
#define prv(v) fr(i,(v).si) prp((v)[i]); br

#define si size()
#define pb push_back
#define mp make_pair
#define danet(b) prl((b)?"YES":"NO")
#define iosync ios::sync_with_stdio(0)
#define stop return 0

using namespace std;
int main() {
    js; ui k=1;
    fl(i,1,s.si){
        if(s[i]==s[i-1]) k++;
        else k=1;
        if(k==7){cout<<"YES"; stop;}
    }
    cout<<"NO";
    return 0;
}
