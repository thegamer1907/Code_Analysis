#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#define pi acos(-1)
using namespace std;
double h,m,s,t1,t2,a[10];
int main()
{
  cin>>h>>m>>s>>t1>>t2;
  s=2*pi*s/60;
  m=2*pi*m/60+s/60;
  h=2*pi*h/12+m/12;
  t1=2*pi*t1/12;
  t2=2*pi*t2/12;
  a[1]=s; a[2]=m; a[3]=h; a[4]=t1; a[5]=t2;
  sort(a+1,a+6);
  a[6]=a[1];
  int kill=0;
  for(int i=1;i<=5;i++) if((a[i]==t1 && a[i+1]==t2) || (a[i]==t2 && a[i+1]==t1)) kill=1;
  if(kill==1) printf("YES\n");
  else printf("NO\n");
  return 0;
}
