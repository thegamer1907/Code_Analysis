#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=1e5+10;
ll n,k,m;
ll ys(ll a){
    return (a+k-1)/k;
}
ll arr[maxn];
int main()
{
    scanf("%lld%lld%lld",&n,&m,&k);
    ll x;
    int ans=0;
    for(int i=1;i<=m;i++)scanf("%lld",&arr[i]);
    int gs=0,pos=ys(arr[1]),t=1;
   // for(int i=1;i<=m;i++)printf("%lld\n",ys(arr[i]));
    int temp=0;
    while(t<=m){
        ans++;
        while(t<=m&&pos==ys(arr[t]-gs)){
            temp++;t++;
        }
        gs+=temp;
        pos=ys(arr[t]-gs);
        if(t==m){
            ans++;break;
        }
        temp=0;
    }
    printf("%d\n",ans);
}