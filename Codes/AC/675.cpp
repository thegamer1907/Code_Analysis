#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n,i=0,cnt=10,ans=0;
  cin>>n;
  while(i<n)
  {
    ll x=cnt,y=0;
    while(x>0){
      y+=x%10;
      x/=10;
    }
    if(y==10){
    ans=cnt; i++;}
    cnt++;
  }
  cout<<ans;
  return 0;
}
