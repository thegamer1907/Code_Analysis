#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main()
{
  int h,m,s,t1,t2;
  int unit1,unit2;
  int in=0,out=0;
  cin>>h>>m>>s>>t1>>t2;
  if(t1<t2)
  swap(t1,t2);
  unit1=t1*5;
  unit2=t2*5;
  if(s<unit1&&s>unit2)
  in++;
  else 
  out++;
  unit1=t1*60*5;
  unit2=t2*60*5;
  m=m*60+s;
  if(m<unit1&&m>unit2)
  in++;
  else
  out++;
  if(in&&out)
  {
   cout<<"NO"<<endl;
   return 0;
  }
  unit1=t1*5*60*12;
  unit2=t2*5*60*12;
  h=h*5*60*12+m;
  if(h<unit1&&h>unit2)
  in++;
  else
  out++;
  if(in&&out)
  {
   cout<<"NO"<<endl;
   return 0;
  }
  cout<<"YES"<<endl;
}