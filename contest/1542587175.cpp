#include <bits\stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
double h,m,s,t1,t2;
int main()
{
  cin>>h>>m>>s>>t1>>t2;
  m/=5;
  s/=5;
  if(s>0)m+=0.01;
  if(s>0||m>0)h+=0.01;
  int flag1=1,flag2=1;
  if(h>12)h-=12;
  if(m>12)m-=12;
  if(t1>t2)swap(t1,t2);
 // cout<<h<<m<<s<<endl;
  if((h>t1&&h>t2)||(h<t1&&h<t2))flag1=0;
  if(h>t1&&h<t2)flag2=0;
   if((m>t1&&m>t2)||(m<t1&&m<t2))flag1=0;
  if(m>t1&&m<t2)flag2=0;
   if((s>t1&&s>t2)||(s<t1&&s<t2))flag1=0;
  if(s>t1&&s<t2)flag2=0;
  if(flag1||flag2)printf("YES\n");
  else printf("NO\n");
  return 0;
}
