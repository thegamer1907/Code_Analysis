#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
#define sfl(n) scanf("%lld",&n)
#define pfl(n) printf("%lld\n",n)
#define sf(n) scanf("%d",&n)
#define pf(n) printf("%d ",n)
#define bitget(n) __builtin_popcountll(n)
#define MAX 1000000000000000000 //10^18
#define MIN -1000000000000000000
#define ipair pair<long long ,long long >

ll dx[] = {1,1,0,-1,-1,-1,0,1};
ll dy[] = {0,-1,-1,-1,0,1,1,1};
ll dxx[] = {1,-1,0,0};
ll dyy[] = {0,0,-1,1};
ll modexpo(ll x,ll y){if(y==0)return 1;if(y%2){ll viky=modexpo(x,y/2);
return (((x*viky)%mod)*viky)%mod;}else{ll viky=modexpo(x,y/2);return (viky*viky)%mod;
}}
ll intpoint(ll x1, ll y1, ll x2, ll y2) { return ( __gcd(abs(x1-x2),abs(y1-y2))+1); }
bool isvalid(ll x,ll y,ll n,ll m) { return (x>=0&&x<n&&y>=0&&y<m); }
// ---------------------///////////////---------------------------------
// ---------------------///////////////----------------------------------
// -------------/////////////////---------------------------------///////
ll dp[500011];
map<ll,ll>mp;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t,i,j,l,r,q,k,x,c,m,n,p;
    string s;
    cin>>s;

    n = s.size();

    p = s.find("AB");
    string ab = "BA";
    if(p<n){
      for(i=p+3;i<n;i++){
        if(s[i]=='A'&&s[i-1]=='B'){
          cout<<"YES";
          return 0;
        }
      }
    }else{
      cout<<"NO";
      return 0;
    }
    p = s.find("BA");
    if(p<n){
      for(i=p+3;i<n;i++){
        if(s[i]=='B'&&s[i-1]=='A'){
          cout<<"YES";
          return 0;
        }
      }
      cout<<"NO";
      return 0;
    }else{
      cout<<"NO";
      return 0;
    }
return 0;
}