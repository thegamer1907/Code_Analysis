#include<bits/stdc++.h>
#define ll long long
#define RG register
#define il inline
#define N 110
using namespace std;
double h,m,s,t1,t2;
int main(){
  cin>>h>>m>>s>>t1>>t2;
  if(h==12)h=0;
  if(t2==12)t2=0;
  if(t1==12)t1=0;
  h*=5;t1*=5,t2*=5;
  if(t1==t2)cout<<"YES",exit(0);
  if(s!=0)m+=s/60;
  if(m!=0)h+=m/60;
  if(t1>t2)swap(t1,t2);
  if(h>t1&&h<t2&&m>t1&&m<t2&&s>t1&&s<t2)cout<<"YES",exit(0);
  if((h>t1&&h<t2)||(m>t1&&m<t2)||(s>t1&&s<t2))cout<<"NO",exit(0);
  cout<<"YES";
  return 0;
}
