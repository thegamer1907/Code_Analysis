#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll req1,req2,req3,
   cur1,cur2,cur3,
   price1,price2,price3,money;

bool can(ll x){
  ll required=max((x*req1-cur1)*price1,0ll)+
              max((x*req2-cur2)*price2,0ll)+
              max((x*req3-cur3)*price3,0ll);
  return money>=required;
}

int main() {
  string s;cin>>s;
  for(auto i:s){
    if(i=='B')req1++;
    if(i=='S')req2++;
    if(i=='C')req3++;
  }
  cin>>cur1>>cur2>>cur3;
  cin>>price1>>price2>>price3;
  cin>>money;

  ll l=0,r=1e14;

  while(l<r){
    ll mid=(l+r+1)/2;
    if(can(mid))l=mid;
    else r=mid-1;
  }
  cout<<l;
}