#include<bits/stdc++.h>
using namespace std;

#define int long long

const int MOD=1e9+7;
const int B=727;
const int MAXn=1e6+100;

string s;
int n,hsh[MAXn],pw[MAXn];
vector<int> v;

int hs(int l, int r){
  if(l==0)return hsh[r];
  return (hsh[r]-((hsh[l-1]*pw[r-l+1])%MOD)+MOD)%MOD;
}
bool is_ok(int x){
  if(hs(0,x)!=hs(n-x-1,n-1)) return 0;
  for(int i=x+1;i<n-1;++i)
    if(hs(0,x)==hs(i-x,i)) return 1;
  return 0;
}
int bs(int l, int r){
  if(l==r)
    return r;
  int mid=(l+r+1)/2;
  if(is_ok(v[mid]))
    bs(mid,r);
  else 
    bs(l,mid-1);
}
signed main(){
  cin>>s; n=(int)s.size();
  pw[0]=1;
  for(int i=1;i<MAXn;++i){
    pw[i]=(pw[i-1]*B)%MOD;
  }
  hsh[0] = s[0];
  for(int i=1;i<n;++i){
    hsh[i]=((hsh[i-1]*B)%MOD+(s[i]))%MOD;
  }
  for(int i=0;i<n-1;++i)
    if(hs(0,i)==hs(n-i-1,n-1))
      v.push_back(i);
  if((int)v.size()==0){
    return cout<<"Just a legend\n",0;
  }
  int nn=(int)v.size();
  int point=bs(0,nn-1);
  if(is_ok(v[point])){
    for(int i=0;i<=v[point];++i)
      cout<<s[i];
    cout<<endl;
  }
  else{
    return cout<<"Just a legend\n",0;
  }
  return 0;
}
