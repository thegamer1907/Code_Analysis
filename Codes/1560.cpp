#pragma comment(linker, "/stack:640000000")

#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<stdio.h>
using namespace std;
#define ll long long int
#define scanl(a) scanf("%lld",&a)
#define scanii(a,b) scanf("%d%d",&a,&b)
#define scaniii(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define scanll(a,b) scanf("%lld%lld",&a,&b)
#define scanlll(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define scani(a) scanf("%d",&a)
#define clr(a) memset(a,0,sizeof(a))
#define clr_(a) memset(a,-1,sizeof(a))
#define pb(a) push_back(a)
#define pii pair<int,int>
#define sqr(a) a*a
#define eps 1e-9
#define inf INT_MAX
#define pi acos(-1.0)
#define ff first
#define ss second
#define INF 1e18
#define endl '\n'
#define vsort(v) sort(v.begin(),v.end())
#define all(v) v.begin(),v.end()
int fx[]={0,0,-1,1,-1,1,1,-1};
int fy[]={1,-1,0,0,1,1,-1,-1};
ll lcm(ll a,ll b){return (a/__gcd(a,b))*b;}
ll bigmod(ll a,ll p,ll mod){ll ans=1;while(p){if(p&1)ans=ans*a%mod;a=a*a%mod;p>>=1;}return ans;}
ll power(ll x,ll n){if(n==0)return 1;else if(n%2==0){ll y=power(x,n/2);return y*y;}else return x*power(x,n-1);}
#ifdef shaft
     #define debug(args...) {cerr<<"Debug: "; dbg,args; cerr<<endl;}
#else
    #define debug(args...)  // Just strip off all debug tokens
#endif

struct debugger{
    template<typename T> debugger& operator , (const T& v){
        cerr<<v<<" ";
        return *this;
    }
}dbg;
ll arr[200000],temp[200000];
int n;
ll func(int k,ll s){
    for(int i=0;i<n;i++){
        temp[i]=arr[i]+1LL*k*(i+1);
    }
    sort(temp,temp+n);
    ll x=0,y=0;
    for(int i=0;i<k;i++){
        if(temp[i]+x>s)return s+1;
        x+=temp[i];
    }
    return x;
}
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
    #ifdef shaft
       // freopen("in.txt","r",stdin);
        ///freopen("out.txt","w",stdout);
    #endif ///shaft
    ll s;
    while(cin>>n>>s){
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int l=0,h=n;
        ll ans=0;int tot=0;
        while(l<=h){
            int m=(l+h)/2;
            ll res=func(m,s);
            if(res<=s){
                ans=res;
                tot=m;
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        cout<<tot<<" "<<ans<<endl;
    }
    return 0;
}
