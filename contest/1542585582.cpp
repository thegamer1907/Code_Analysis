#include<bits/stdc++.h>
using namespace std;
int main()
{ int h,m,s,t1,t2,p=0,h1,m1,s1,x,y;
  cin>>h>>m>>s>>t1>>t2;
  h1=h;m1=m;s1=s;x=t1;y=t2;
  y=0;x=(t1+12-t2)%12;h1=(h+12-t2)%12;s1=(s+(12-t2)*5)%60;m1=(m+(12-t2)*5)%60;
  if(h1<x && m1<5*x && s1<5*x)
  p++;
  h1=h;m1=m;s1=s;x=t1;y=t2;
  x=0;y=(t2+12-t1)%12;h1=(h+12-t1)%12;s1=(s+(12-t1)*5)%60;m1=(m+(12-t1)*5)%60;
  if(h1<y && m1<5*y && s1<5*y)
  p++;
  if(p!=0)
  cout<<"YES";
  else
  cout<<"NO";
  return 0;
}
