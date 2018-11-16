#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n;
  cin>>n;
  ll a[n];
  for(ll i=0;i<n;i++)
  {
      cin>>a[i];
  }
  ll m;
  cin>>m;
  ll b[m];
  for(ll i=0;i<m;i++)
  {
      cin>>b[i];
  }
  
  sort(a, a+n);
  sort(b, b+m);
  for(ll i=0;i<n;i++)
  {
      for(ll j=0;j<m;j++)
      {
          if(b[j]!=0)
          {
              if(abs(a[i] - b[j])<= 1)
              {
                  b[j] = 0;
                  break;
              }
          }
      }
  }
  
  ll c = 0;
  for(ll i=0;i<m;i++)
  {
      if(b[i] == 0)
      {
          c++;
      }
  }
  cout<<c<<endl;
  return 0;
}