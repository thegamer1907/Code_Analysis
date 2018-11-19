#include<bits/stdc++.h>
using namespace std;
vector<int> sqr[11];

int main(){
  float h,m,s,t1,t2;
  int k;
  cin>>h>>m>>s>>t1>>t2;
  m=m+s/60;
  h=h+m/60;
  if(h>=12)h-=12;
  s=s/5;
  m=m/5;
  vector<float>v(3);
  v[0]=h;
  v[1]=m;
  v[2]=s;
  if(t1==12)t1=0;
  if(t2==12)t2=0;
  sort(v.begin(),v.end());
  if(v[0]!=0 && v[1]!=0 && v[2]!=0){
  if(0<=t1 && t1<v[0] && 0<=t2 && t2<v[0]){cout<<"YES";return 0;}
  else if(v[0]<t1 && t1<v[1] && v[0]<t2 && t2<v[1]){cout<<"YES";return 0;}
  else if(v[1]<t1 && t1<v[2] && v[1]<t2 && t2<v[2]){cout<<"YES";return 0;}
  else if(v[2]<t1 && t1<12 && v[2]<t2 && t2<12){cout<<"YES";return 0;}
  else if(v[2]<t1 && t1<12 && 0<=t2 && t2<v[0]){cout<<"YES";return 0;}
  else if(v[2]<t2 && t2<12 && 0<=t1 && t1<v[0]){cout<<"YES";return 0;}
}else{
  if(0<t1 && t1<v[0] && 0<t2 && t2<v[0]){cout<<"YES";return 0;}
  else if(v[0]<t1 && t1<v[1] && v[0]<t2 && t2<v[1]){cout<<"YES";return 0;}
  else if(v[1]<t1 && t1<v[2] && v[1]<t2 && t2<v[2]){cout<<"YES";return 0;}
  else if(v[2]<t1 && t1<12 && v[2]<t2 && t2<12){cout<<"YES";return 0;}
}
  cout<<"NO";
  return 0;
}