#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll s1,s2,s3,c1,c2,c3,p1,p2,p3,m;

bool can(ll x){
  ll required=max((x*s1-c1)*p1,0ll)+
              max((x*s2-c2)*p2,0ll)+
              max((x*s3-c3)*p3,0ll);
  return m>=required;
}

int main() {
  string s;cin>>s;
  for(auto i:s){
    if(i=='B')s1++;
    if(i=='S')s2++;
    if(i=='C')s3++;
  }
  cin>>c1>>c2>>c3>>p1>>p2>>p3>>m;
  ll l=0,r=1e14,mid;
  int cnt=0;
  while(l<r){
    cnt++;
    mid=(l+r+1)/2;
    if(can(mid))l=mid;
    else r=mid-1;
  }
  cout<<l;
}