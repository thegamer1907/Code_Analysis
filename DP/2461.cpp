#include <bits/stdc++.h>
using namespace std;
#define mod1 1000000007
typedef long long ll;
ll arr[100010];
ll dis[100010];
int main()
{
    ll total,cnt;
    cin>>total>>cnt;
    for(ll i=1; i<cnt; i++)
    {
        dis[i]=1;
        arr[i]=arr[i-1]%mod1;
        arr[i]++;
    }
    dis[cnt]=2;
    arr[cnt]=arr[cnt-1];
    arr[cnt]+=2;
    arr[cnt]%=mod1;
    for(ll i=cnt+1; i<=100000; i++)
    {
        dis[i]=dis[i-cnt]+dis[i-1];
        arr[i]=arr[i-1];
        arr[i]+=dis[i];
        arr[i]%=mod1;
        dis[i]%=mod1;
    }
    for(ll i=1; i<=total; i++)
    {
        ll l,r;
        cin>>l>>r;
        cout<<(arr[r]-arr[l-1]+mod1)%mod1<<endl;
    }
}
