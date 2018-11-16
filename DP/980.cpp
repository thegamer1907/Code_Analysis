#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int vet[n+1],dp[n+1],ans=0,a;
  memset(dp,0,sizeof(dp));
  for(int i=1;i<=n;i++){
    cin>>vet[i];
    if(vet[i]==1) ans++;
  }
  for(int i=1;i<=n;i++){
      if(vet[i]) a=-1;
      else a=1;
      dp[i]=dp[i-1]+a;
      if(dp[i]<0)dp[i]=0;
  }
  sort(dp,dp+(n+1));
  reverse(dp,dp+(n+1));
  if(ans!=n) cout<<ans+dp[0];
  else cout<<ans-1;
  return 0;
}