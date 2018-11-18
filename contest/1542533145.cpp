#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int c[16];
  memset(c,0,sizeof(c));
  for(int i=0;i<n;i++)
  {
   int s=0;
   for(int j=0;j<k;j++)
   {
    int d;
    cin>>d;
    s+=(d<<j);
   }
   if(s==0)
   {cout<<"YES"<<endl;
   return 0;}
   c[s]++;
  }
  for(int i=0;i<(1<<k);i++)
  {
   for(int j=0;j<(1<<k);j++)
   {
     if(i & j)
     continue;
     if(c[i] && c[j])
     {cout<<"YES"<<endl;
     return 0;}
   }
  }
  cout<<"NO"<<endl;
  return 0;
}
