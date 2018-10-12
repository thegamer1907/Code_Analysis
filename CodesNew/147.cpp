#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;
#define repp(x,n) for(ll x=1;x<=(n);x++)
#define rep(x,n) for(__typeof(n) x=0;x<(n);x++)
#define sf(n)       scanf("%lld", &n)
#define sff(a,b)    scanf("%lld %lld", &a, &b)
#define pf(a)  printf("%lld\n",a)
#define pff(a,b)  printf("%lld %lld",a,b)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define READ freopen("double helix.txt","r",stdin)
int main(){
    ll n,k,ans,d,f,l,N,Nth;
    sff(n,k);
    repp(i,n){
        N=0;
        f = pow(2,i-1);
        d = pow(2,i);
        N = (k+d-1)/d;
        Nth = f + ((N-1)*d);
       // cout<<f<<" "<<d<<" "<<N<<" "<<Nth<<"   "<<endl;
        if(Nth == k){
            pf(i);
         return 0;
        }
    }
}

