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
struct gg{
  ll start;
  ll end;
  ll maxi;
};

gg kadens(ll dp[], ll n){
  gg ans;
  ans.start = 0;
  ans.end = 0;
  ans.maxi = 0;
  ll best = 0;
  ll ok = 1;
  for(ll i=0;i<n;i++){
    best += dp[i];
    if(best<0){
      best = 0;
      ok = 1;
    }else{
      if(ans.maxi<best&&ok){
        ans.start = i;
        ans.end  = i;
        ans.maxi = max(ans.maxi,best);
        ok = 0;
      }else if(ans.maxi<best){
        ans.maxi = max(ans.maxi,best);
        ans.end = i;
      }
    }
  }
  return ans;
} 

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t,i,j,l,r,q,k,x,c,m,n,p,s;
    cin>>n;
    ll ap[n+11];
    ll dp[n+11];
    k=0;
    ll ans1 = 0;
    for(i=0;i<n;i++){
      cin>>ap[i];
      ans1 += ap[i];
    }
    ll cnt = 1;
    ll flag;
    if(ap[0]==1){
      flag = -1;
    }else{
      flag = 1;
    }
    for(i=1;i<n;i++){
      if(ap[i]!=ap[i-1]){
        dp[k++] = cnt*flag;
        cnt = 1;
        flag = -flag;
      }else{
        cnt++;
      }
    }
    dp[k++] = cnt*flag;
    gg ans = kadens(dp,k);
    if(ans.maxi == 0)
      cout<<(ans1-1);
    else
      cout<<(ans1 + ans.maxi);
    // ll ans1 = ans.maxi;
    // cout<<ans.start<<" "<<ans.end<<" ";
    // cout<<ans.maxi<<" ";
    // for(i=0;i<k;i++){
    //   if(i<ans.start||i>ans.end){
    //     if(dp[i]<0){
    //       ans1 += abs(dp[i]);
    //     }
    //   }
    // }
    // cout<<ans1;
return 0;
}