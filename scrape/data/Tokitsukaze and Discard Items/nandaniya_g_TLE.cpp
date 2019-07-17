#include <bits/stdc++.h>
using ll=long long;
using namespace std;
int main(){
  ll n,m,k;
  cin>>n>>m>>k;
  ll arr[m];
  for(int i=0;i<m;i++)
  cin>>arr[i];
  int i=0;
  int k1=0;
  int cnt=0;
  int b=0;
  while(i<m)
  {
    k1=((arr[i]-k1)/k)*k+k1;
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