#include <sstream>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<ctime>
#include<cmath>
#include<map>
#include<stack>
using namespace std;
#define ll long long int
#define ld long double
#define key pair<ld,ld>
#define ii pair<int,int>
#define si set<int>
#define vii vector<pair<int,int> >
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vs vector<string>
#define all(v) v.begin(),v.end()
//#define rep(i,n) for(int i = 0; i < n; ++i)
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define nu 100001
#define mod 1000000007
#define mul(x,y) ((ll)(x)*(y))%mod
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define INF 0x3f3f3f3f
vector<pair<ll,ll>> a;
vector<ll> b;
vector<ll> c;
ll dp[100002];
ll MOD(ll a, ll b)
{
    if(a>b)
        return a-b;
    else
        return b-a;
}
ll max3(ll a,ll b, ll c)
{
    return max(c,max(a,b));
}
ll min3(ll a,ll b,ll c)
{
    return min(a,min(b,c));
}
ll power(ll x,ll y )
{
    ll res = 1;
    x = x ;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x);
        y = y>>1;
        x = (x*x);
    }
    return res;
}
ll logg(ll a)
{
    ll x=0;
    while(a>1)
    {
        x++;
        a/=2;
    }
    return x;
}
ll gcd(ll a,ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    int n;
    cin>>n;
    vi p(n+1);
    vi ans;ans.resize(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    for(int i=1;i<=n;i++)
    {
        int x=i;
        int h=1;
        while(p[x]!=-1)
        {
            x=p[x];
            h++;
        }
        ans[i]=max(h,ans[i]);
    }
    sort(all(ans));
    cout<<ans[n];
    
}
