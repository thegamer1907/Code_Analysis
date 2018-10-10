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

ll gcd(ll a,ll b) {if(b==0) return a; return gcd(b,a%b); }

//ll dp[505][505][505]

int main()
{
    string s;
    cin>>s;
    ll cb,cs,cc;
    cb=cs=cc=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B')
        cb++;
        else if(s[i]=='S')
        cs++;
        else
        cc++;
    }
    ll bb,bs,bc;
    gll3(bb,bs,bc);
    ll pb,ps,pc;
    gll3(pb,ps,pc);
    ll m;
    gll(m);
    ll l=0;
    ll r=1e13;
    while(l<=r)
    {
        bool f=true;
        ll mid=(r-l)/2+l;
       // cout<<l<<" "<<r<<" "<<mid<<endl;
        ll nb=cb*mid-bb;
        ll ns=cs*mid-bs;
        ll nc=cc*mid-bc;
        nb=nb>0?nb:0;
        ns=ns>0?ns:0;
        nc=nc>0?nc:0;
        if(nb*pb+nc*pc+ns*ps<=m)
        f=true;
        else
        f=false;
        if(f==true)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        
    }
    cout<<l-1<<endl;
}