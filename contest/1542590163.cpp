#include<iostream>
using namespace std;
main()
{
 int i,f,n;
 char s[5],a[105][5];
 cin>>s;
 cin>>n;
 f=0;
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 if((a[i][0]==s[0] && a[i][1]==s[1])||(a[i][1]==s[0]&&a[i][0]==s[1]))
 f=1;
 }
 if(f==0)
 {
  for(i=0;i<n;i++)
  if(a[i][1]==s[0])
  break;
  if(i<n)
  {
   for(i=0;i<n;i++)
   if(a[i][0]==s[1])
   break;
   if(i<n)
   f=1;
   else
   f=0;
  }
  else
  f=0;
  }
  if(f==1)
  cout<<"YES\n";
  else
  cout<<"NO\n";
  }
