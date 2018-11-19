#include<bits/stdc++.h>
using namespace std;
int main()
{ char a[2];
  cin>>a[0]>>a[1];
  int n,flag=0,p1=0,p2=0;
  cin>>n;
  char b[n][2];
  for(int i=0;i<n;i++)
  cin>>b[i][0]>>b[i][1];
  for(int i=0;i<n;i++)
  if(b[i][0]==a[0] && b[i][1]==a[1])
  flag++;
  if(flag==0)
  {for(int i=0;i<n;i++)
   {if(b[i][0]==a[1])
   p1++;
   if(b[i][1]==a[0])
   p2++;}
   if(p1!=0 && p2!=0)
   cout<<"YES";
   else
   cout<<"NO";}
  else
  cout<<"YES";
  return 0;
}
