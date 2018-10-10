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
ll n;
vec a(10000010,0);
ll ma=10000010;
vec pri(10000010+1,0);
bool isp[10000010];
int main()
{
    IOS;
    cin>>n;
    loop(i,0,n)
    {
        ll d;
        cin>>d;
        a[d]++;
    }
    memset(isp,true,sizeof(isp));
    for(ll i=2;i*i<=1e14;i++)
    {
        if(isp[i])
        {
            for(ll j=2*i;j<=ma;j=j+i)
                pri[i]+=a[j],isp[j]=false;
            pri[i]+=a[i];
        }
    }
    for(ll i=2;i<=ma;i++)
    {
        pri[i]+=pri[i-1];
    }
    ll m;
    cin>>m;
    while(m--)
    {
        ll l,r,ans=0;
        cin>>l>>r;
        if(l>1e7){
            cout<<"0\n";
            continue;
        }
        if(r>1e7)
            r=min(r,ma);
        ans=pri[r]-pri[l-1];
        cout<<ans<<'\n';
    }
    return 0;
}
