#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
  int n,t,i;
  cin>>n>>t;
  int path[n+5];
  for(i=1;i<n;i++)
    cin>>path[i];
  int cur=1;
  while(cur<t)
  {
      cur+=path[cur];

  }
  if(cur==t)
    cout<<"YES"<<'\n';
  else
    cout<<"NO"<<'\n';
  return 0;
}
