#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<unordered_map>

#define DD 1
#define FOR(i,a,b) for(long long i=a;i<b;i++)
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

vll v;

void solve() 
{
    for(ll i=1;i<(ll)2e7;i++) {
        ll t=i;
        ll sum=0;
        while(t)
            sum+=(t)%10,t/=10;
        if(sum==10)
            v.pb(i);
    }
//     deb(v.size());
    int k;
    cin>>k;
    cout<<v[k-1]<<endl;
}

int main() 
{
    solve();
    return 0;
}