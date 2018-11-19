#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ios::sync_with_stdio(0);  cin.tie(0);
  //freopen("ip.txt","r",stdin);
  double h,m,s,t1,t2; cin>>h>>m>>s>>t1>>t2; bool possible=true; bool a,b,c;
  h=(h+m/60+s/3600)*30;m=(m+s/60)*6; s=6*s; t1=t1*30; t2=t2*30; if(t1>t2) { t1+=t2;t2=t1-t2; t1-=t2;}
  if(h<t2 && h>t1) a=false; else a=true;
  if(m>t1 && m<t2) b=false; else b=true;
  if(s>t1 && s<t2) c=false; else c=true;
  if((a==true && b==true && c==true) || (a==false && b==false && c==false)) cout<<"YES"; else cout<<"NO";

  return 0;
}
