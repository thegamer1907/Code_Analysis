#include <bits/stdc++.h>

#define ui unsigned int
#define ll long long
#define prl(c) cout<<(c)<<endl
#define bee(fu) (fu).begin(), (fu).end()
#define fr(i, n) for(ui (i)=0; (i)<(n); (i)++)
#define fr1(i, l, n) for(ui (i)=(l); (i)<(n); (i)++)

#define vint vector<ll>
#define pi M_PI
#define prll(c, d) cout<<(c)<<" "<<(d)<<endl
#define prp(c) cout<<(c)<<" "
#define br cout<<endl

#define jn ui n; cin>>n
#define js string s; cin>>s
#define cinv(a) fr(i,(a).si) cin>>(a)[i]
#define prv(v) fr(i,(v).si) prp((v)[i]); br

#define si size()
#define pb push_back
#define mp make_pair

#define danet(b) prl((b)?"Yes":"No")
#define iosync ios::sync_with_stdio(0)
#define stop return 0

using namespace std;

int main() {
    ui n,m,h,k; cin>>n>>m;
    if(n>=m){
            prl(n-m);
    } else {
        h=n; k=0;
        while(h<m){ h*=2;k++;}
        k+=(h-m)/(h/n);
        h=(h-m)%(h/n);
        while(h>0) {k+=h%2; h/=2;}
        prl(k);
    }
	return 0;
}
