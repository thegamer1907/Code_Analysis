#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main(){
  //freopen("input", "r", stdin);
  int h,m,s,t1,t2;
  cin>>h>>m>>s>>t1>>t2;
  if(t1==t2){cout<<"YES"<<endl;}
  if(t1>t2)swap(t1,t2);
  int f=0;
  if((h<=t1-1||h>=t2)&&(m<=t1*5-1||m>=t2*5)&&(s<=t1*5||s>=t2*5))f=1;
  if((h>=t1&&h<=t2-1)&&(m>=t1*5&&m<=t2*5-1)&&(s>=t1*5&&s<=t2*5))f=1;
  if(f==1)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
