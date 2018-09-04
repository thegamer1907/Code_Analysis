#include<bits/stdc++.h>
#define MEM(dp,i) memset(dp,i,sizeof(dp))
#define F first
#define C continue
#define pb push_back
#define S second
#define R return
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef double D;
const int MX=1e7+1;
const ll inf=(1ll<<60);
const ll mod=1e9+7;
ll n,pr[MX],a[MX],p[MX];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        ll x;
        scanf("%lld",&x);
        a[x]++;
    }
    for(int i=2;i<=1e7;i++){
        if(p[i])C;
        for(int j=i;j<=1e7;j+=i){
            p[j]=1;
            pr[i]+=a[j];
        }
    }
    for(int i=2;i<=1e7;i++)pr[i]+=pr[i-1];
    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        scanf("%lld%lld",&l,&r);
        if(l>10000000){
            puts("0");
            C;
        }
        ll x=pr[min(r,10000000ll)]-pr[max(0ll,l-1)];
        printf("%lld\n",x);
    }
}
