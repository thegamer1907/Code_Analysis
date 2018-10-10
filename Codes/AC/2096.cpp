#include<bits/stdc++.h>
#define cin(a) cin>>a;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define cout(a) cout<<a;
#define new() cout<<endl;
#define ff first
#define ss second
#define READ freopen("input.txt","r",stdin);
#define WRITE    freopen("output.txt","w",stdout);
#define fill(a,x) memset(a,x,sizeof(a));
#define loop(i,x,n) for(int i=x;i<n;i++)
#define loopr(i,x,n) for(int i=n;i>=x;i--)
#define TC() ll t;cin>>t;while(t--)
typedef long long ll;
#define mod 1000000007
#define N 100020
#define vec vector<ll>
#define vmp vector<pair<ll,ll> >
#define pb push_back
#define mp make_pair
#define all(a)         a.begin(), a.end()
#define ull unsigned long long
#define INF 1e18
using namespace std;
ll gcd(ll x,ll y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}
ll expo(ll n,ll m)   //MODULAR EXPONENTIATION
{
    ll r=1;
    while(m>0)
    {
        if(m%2)
            r=(r*n)%mod;
        n=(n*n)%mod;
        m=m/2;
    }
    return r%mod;
}
map<ll,ll>r,l;
int main()
{
    IOS;
    ll n,k;
    cin>>n>>k;
    vec a(n);
    loop(i,0,n){
    cin>>a[i];
    r[a[i]]++;
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
       ll x=0,y=0;
       if(a[i]%k==0)
        x=l[a[i]/k];
       r[a[i]]--;
       y=r[a[i]*k];
       ans+=x*y;
       l[a[i]]++;
    }
    cout<<ans;
    return 0;
}
