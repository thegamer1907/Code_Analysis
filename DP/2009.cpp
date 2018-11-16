#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
const ll mod =1e9+7;
ll dx[]={-1,-1,-1,0,0,1,1,1};
ll dy[]={-1,0,1,-1,1,-1,0,1};


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    //freopen("C:/Users/HP/Desktop/inp.txt","r",stdin);
    //freopen("C:/Users/HP/Desktop/outp.txt","w",stdout);

    ll n,m;
    cin>>n>>m;
    ll vis[100002],cum[100002],arr[n+1];
    memset(vis,0,sizeof(vis));
    memset(cum,0,sizeof(cum));
    for(ll i=1;i<=n;++i)
    {
        cin>>arr[i];
    }
    for(ll i=n;i>=1;i--){
        cum[i]=cum[i+1];
        if(!vis[arr[i]])
        {
            cum[i]++;
            vis[arr[i]]++;
        }
    }
    while(m--)
    {
        ll idx;
        cin>>idx;
        cout<<cum[idx]<<endl;
    }
    return 0;
}
