#include <bits/stdc++.h>

using namespace std;

void autoinput()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
}

#define ll long long
#define scan(x) scanf("%lld",&x)
#define pb push_back
#define mp make_pair
#define make_edge(xx,yy) v[xx].pb(yy);v[yy].pb(xx)
const ll mod=(1e9+7);

ll bigmod(ll N,ll P)
{
    if(P==0) return 1;
    if(P%2==0)
    {
        ll ret=bigmod(N,P/2);
        return ((ret%mod)*(ret%mod))%mod;
    }
    else return ((N%mod)*(bigmod(N,P-1)%mod))%mod;

}
ll arr[200005];


int main()
{
    #ifndef ONLINE_JUDGE
       autoinput();
    #endif
    ll i,j,k,l,m,n;
    cin >> n >> m >> k;
    for(i=0;i<m;i++)
    {
        cin >> arr[i];
    }
    ll p=0,x=k;
    ll countt=0,ans=0;
    for(i=0;i<m;i++)
    {
       
        while(arr[i]>x+p)
        {
            x+=k;
        } 
     //  cout << i << " " << x << " " << p << endl;
        while(arr[i]<=x+p)
        {
            i++;
            countt++;
            if(i==m)
            {
                break;
            }  
        }
        i--;
        ans++;
        p=countt;
    }
    cout << ans;
}