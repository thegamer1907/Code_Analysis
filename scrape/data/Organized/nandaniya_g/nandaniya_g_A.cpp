#include <bits/stdc++.h>
using ll=long long;
using namespace std;
int main(){
  ll n,m,k;
  cin>>n>>m>>k;
 // cout<<n+k<<endl;
  ll arr[m];
  for(ll i=0;i<m;i++)
  cin>>arr[i];
  ll i=0;
  ll k1=0;
  ll cnt=0;
  ll b=0;
  while(i<m)
  {
    k1=((arr[i]-k1)/k)*k+k1;
   // cout<<k1<<"**"<<endl;
    if(k1<arr[i])
    {
        k1+=k;
    }
      for(;i<m;i++)
      {
          if(arr[i]<=k1)
          b++;
          else
          break;
      }
      cnt++;
      k1+=b;
      b=0;
  }
  cout<<cnt<<endl;
   return 0;}