#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5,MOD=1e9+7;
    int n,s;
    ll a[N],b[N];
ll an;
bool can(int m){
    for (ll i=0;i<n;i++){
        b[i]=a[i]+(i+1)*m;
    }
    sort(b,b+n);
    ll x=0;
    for (int i=0;i<m;++i){
        x+=b[i];
        if (x>s) return 0;
    }
    an=x;
    return x<=s;
}


int main()
{
    scanf("%d %d",&n,&s);
    for (int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    ll st=1,en=n,mid;
    ll ans=0;
    while (st<=en){
        mid=(st+en)>>1;
        if (can(mid)){
            ans=mid;
            st=mid+1;
        }else en=mid-1;
    }
    can(ans);
    printf("%lld %lld",ans,!ans ? 0 :an);
    return 0;
}


