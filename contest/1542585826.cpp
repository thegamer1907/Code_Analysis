#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

const lli inf = 1e18;
const int infInt=1e9;
const lli mod =1000000007;


lli a[5];
int main(){
  cin.sync_with_stdio(0);
  cin.tie(0);
  lli h,m,s,t1,t2,M=43200;
  cin>>h>>m>>s;
  a[0]=(h*3600+m*60+s)%M;
  a[1]=(m*720+s)%M;
  a[2]=(s*720)%M;
  cin>>t1>>t2;
  t1=(t1*3600)%M;
  t2=(t2*3600)%M;

  sort(a,a+3);
  bool yes=false;
  if(a[0]<t1 and t1<a[1]){
    if(a[0]<t2 and t2<a[1])
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
  }else if(a[1]<t1 and t1<a[2]){
    if(a[1]<t2 and t2<a[2])
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
  }else{
  	if(a[0]<t2 and t2<a[1])
  	  cout<<"no"<<endl;
  	else if(a[1]<t2 and t2<a[2])
      cout<<"no"<<endl;
    else
      cout<<"yes"<<endl;
  }
  return 0;
}