#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<unordered_map>
 
#define DD 1
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define gi(x) scanf("%d",&x)
#define gi2(x,y) scanf("%d%d",&x,&y)
#define gi3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define garr(arr,n) FOR(i,0,n)  gll(arr[i]);
#define gll(x) scanf("%lld",&x)
#define gll2(x,y) scanf("%lld%lld",&x,&y)
#define gll3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define gf(x) scanf("%lf",&x)
#define gs(x) cin>>x
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define mod 1000000007
#define INF INT_MAX
#define deb(x) if(DD)   cout << #x << " : " << x << endl;
#define debug(x,y) if(DD)   cout << #x << " : "<< x << "\t" << #y << " : "<< y <<endl;
#define all(x) x.begin(),x.end()
#define umap unordered_map
typedef unsigned long long ull;
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
int dx[]={-1,-1,-1,0,1,1,1,0};
int dy[]={-1,0,1,1,1,0,-1,-1};
 
using namespace std;
ll power(ll a,ll p,ll M) {
    ll r=1;
    a=a%M;
    while(p>0) {
        if(p%2)
            r=(r*a)%M;
        a=(a*a)%M;
        p/=2;
    }
    return r;
}

bool check(ll x)
{
    ll a=x;
    ll p;
    ll s=0;
    while(x>0)
    {
        p=x%10;
        s+=p;
        x/=10;
    }
  //  debug(a,s);
    if(s==10)
    {
        return true;
    }
    else
    return false;
}
void solve()
{
    ll m;
    gll(m);
    int i=1;
    ll ans;
    while(m)
    {
        if(check(i))
        {
            m--;
            ans=i;
        }
        i++;
    }
    cout<<ans<<endl;
}
int main()
{
    solve();
    return 0;
} 