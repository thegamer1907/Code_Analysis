#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 998244353
#define MOD2 100000000
#define ll long long
#define cnl(d) cout<<d<<'\n'
#define cns(d) cout<<d<<' '
#define endl '\n'
#define cno cout<<"NO\n"
#define cyes cout<<"YES\n"
#define vl vector<ll>
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define pl pair<ll,ll>
#define vll vector<pl>
#define sl set<ll>
#define sll set<pl>
#define msl map<string,ll>
#define mll map<ll,ll>
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(i=(a);i<=(b);i++)
#define rdp(i,a,b) for(i=(a);i>=(b);i--)
#define lb(v,z) lower_bound(all(v),z)
#define ub(v,z) upper_bound(all(v),z)
#define trvl(c,it) for(vl::iterator it=(c).begin();it!=(c).end();it++)
#define trvll(c,it) for(vll::iterator it=(c).begin();it!=(c).end();it++)
#define trsll(c,it) for(sll::iterator it=(c).begin();it!=(c).end();it++)
#define trmsl(c,it) for(msl::iterator it=(c).begin();it!=(c).end();it++)
#define trmll(c,it) for(mll::iterator it=(c).begin();it!=(c).end();it++)
#define trsl(c,it) for(sl::iterator it=(c).begin();it!=(c).end();it++)
ll mod=MOD;

using namespace std;
long long int fast_exp(long long int base,long long int ex) {
    long long int res=1;
    while(ex>0) {
       if(ex%2==1) res=(res*base)%mod;
       base=(base*base)%mod;
       ex/=2;
    }
    return res%mod;
}
long long int gcd(long long int a, long long int b)
{
    if(b==0)return a;
     long long int re= gcd(b,a%b);return re;
}
ll rec(ll n, ll m)
{
    if(n%6==0||m%6==0)
    {
        ll an=n*m;return an;
    }
    if((n%2==0&&m%4==0)||(n%4==0&&m%2==0))
    {
        ll an=n*m;return an;
    }
    
    if(n<=2&&m<=2){ll an=0;return an;}
    if((n==3||m==3)&&min(n,m)==1){ll r=0;return r;}
    if(min(n,m)==1)
    {
        ll k =max(n,m);
        ll b=k/6;b*=6; 
        if(k%6<=3){return b;}
        if(k%6==4){b+=2;return b;}
        b+=4;
        return b;
    }
    if(min(n,m)==2&&max(n,m)==3){ll r=4;return r;}
    if(n==3&&m==3){ll an=8;return an;}
    if(min(n,m)==3&&max(n,m)==4){ll r=10;return r;}
     if(min(n,m)==3&&max(n,m)==5){ll r=14;return r;}
    if(min(n,m)==4&&max(n,m)==5){ll r=18;return r;}
    if(n==m&&n==5){ll r=22;return r;}
    ll an=0;
    if(n>6){
    ll j=n/6;j*=6;j*=m;
   j+=rec(n%6,m);
   an=max(an,j);
    }
    if(m>6)
 { ll o=m/6;o*=6;o*=n;
    o+=rec(m%6,n);an=max(an,o);}
    
    return an;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        ans++;
        if(a>m)ans++;
    }
    cout<<ans<<"\n";
return 0;
}