#include <iostream>
#include <vector>
using namespace std;
typedef long long int ll;
ll cnt[10000010];
ll notP[10000010];
ll sum[10000010];
ll pre[10000010];
int main()
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;++i){
        ll t;
        scanf("%I64d",&t);
        ++cnt[t];
    }
    for(ll i=2;i<=10000000;++i){
        if(notP[i]){
            continue;
        }
        for(ll j=2;i*j<=10000000;++j){
            notP[i*j]=true;
        }
        for(ll j=1;i*j<=10000000;++j){
            sum[i]+=cnt[i*j];
        }
    }
    for(ll i=1;i<=10000000;++i){
        pre[i]=pre[i-1]+sum[i];
    }
    ll m;
    cin>>m;
    for(ll i=1;i<=m;++i){
        ll l,r;
        scanf("%I64d %I64d",&l,&r);
        printf("%I64d\n",pre[min(r,10000000LL)]-pre[min(l-1,10000000LL)]);
    }
    return 0;
}
