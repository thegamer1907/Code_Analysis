#include <bits/stdc++.h>
using namespace std;

string s;
int z[1000001];
int n;
int l,r;
int best;

int main()
{
  cin>>s;
  n=s.length();
  z[0]=n;
  for(int i=1;i<n;i++)
  {
    if(i>r)
    {
      l=r=i;
      if(s[i]!=s[0]) continue;
      while(r<n && s[r]==s[r-i]) r+=1;
      r-=1;
      z[i]=r-i+1;
      continue;
    }
    if(z[i-l]<=r-i)
    {
      z[i]=z[i-l];
      continue;
    }
    while(r<n && s[r]==s[r-i]) r+=1;
    r-=1;
    z[i]=r-i+1;
    l=i;
  }
  for(int i=1;i<n;i++)
  {
    if(z[i]==n-i && best>=z[i])
    {
      cout<<s.substr(i,z[i]);
      return 0;
    }
    best=max(best,z[i]);
  }
  cout<<"Just a legend";
  return 0;
}