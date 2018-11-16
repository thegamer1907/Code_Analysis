#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  
  ll n,i,k,flag=0;
  cin>>n>>k;
  ll arr[n+1];
  for(i=1;i<=n;i++)
  {
    cin>>arr[i];
  }
  ll present=1;
  if(present==k)
  {
    cout<<"Yes";
    return 0;
  }
  while(present<=n)
  {
    present+=arr[present];
    if(present==k)
    {
      flag=1;
      break;
    }
    else if(present>k)
    {
      flag=0;
      break;
    }
    
  }
  if(flag==0) cout<<"NO";
  else cout<<"YES";
  return 0;
}