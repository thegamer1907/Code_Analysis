#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,i,t=2;
   cin>>n;
  long int x[n],h[n];
  for(i=0;i<n;i++)
  {
      cin>>x[i]>>h[i];
  }
  if(n>=3)
  {
  for(i=1;i<n-1;i++)
  {
      if((x[i]-x[i-1])>h[i])
      t++;
      else if((x[i+1]-x[i])>h[i])
      {
          t++;
          x[i]+=h[i];
      }
  }
  cout<<t;
  }
  else
  cout<<n;
   return 0;
}
