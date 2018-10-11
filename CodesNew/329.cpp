#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long n, t, i, c=0, d, s, e, ans=0;
  cin>>n>>t;
  vector<long long> a;
  for(i=0; i<n; i++)
  {
    cin>>d;
    a.push_back(d);
  }
  d=t;
  c=0;
  i=0;
  while(a[i]<=d && i<n)
  {
    d=d-a[i];
    i++;
    c++;
  }
  s=0;
  ans=c;
  while(i<n)
  {
    if(a[i]>d)
    {
      d+=a[s];
      s++;
      c--;
    }
    else
    {
      d=d-a[i];
      i++;
      c++;
      
      if(c>ans)
        ans=c;
    }
    
  }
  if(ans<=n)
  cout<<ans;
  else
  cout<<n;



  return 0;
}