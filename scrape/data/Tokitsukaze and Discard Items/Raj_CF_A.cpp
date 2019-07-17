#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
  ll n,k,m,j=0,x,t,sum=0;
  cin>>n>>m>>k;
  ll a[m];
  for(ll i=0;i<m;i++)
    cin>>a[i];
    x=(a[0]-1)/k+k;
    t=m;
  while(t)
  { ll r=0;
      for(int i=j;i<m;i++)
      {
          if(a[i]<=x)
            r++;
          else
            {
                j=i;
                break;
            }
      }
      if(r>0)
      {
          x+=r;
          sum++;
          t-=r;
      }
      else
      { ll p=(a[j]-x-1)/k;
        x+=k;
        x+=k*p;
      }
  }
  cout<<sum;
 return 0;
}