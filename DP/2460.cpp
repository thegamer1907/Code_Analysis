#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test() ull t;cin>>t;while(t--)
#define pb push_back
#define mkp make_pair
#define nl cout<<endl
#define MOD 1000000007
#define loop(i,start,end) for(ull i=start;i<end;i++)
#define N 100001
#define oa(a,n) for(int i=0;i<n;i++)cout<<a[i]<<" ";nl
#define ov(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";nl
int main() 
{
    fastio();
    #ifndef ONLINE_JUDGE
      freopen("in.txt","r",stdin);
      freopen("out.txt","w",stdout);
    #endif

  int t,k;
  cin>>t>>k;
  ll dp[N]={};
  ll cum[N]={};
  dp[0]=1;
  loop(i,1,N)
  {
    if(i>=k)
      dp[i]+=dp[i-k];
    dp[i]+=dp[i-1];
    dp[i]%=MOD;
    if(i==1)
    {
      cum[i]=dp[i];
    }
    else
      cum[i]=(cum[i-1]+dp[i])%MOD;
    // cout<<dp[i]<<endl;
  }
  while(t--)
  {
    int a,b;cin>>a>>b;
    cout<<(cum[b]-cum[a-1]+MOD)%MOD<<endl;
  }





  return 0;
}