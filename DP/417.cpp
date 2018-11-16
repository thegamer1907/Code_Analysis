#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
#ifdef SHAN
  freopen("input.txt" , "r" , stdin);
#endif
  ll n,m,ct=0  ;
  cin>>n;
  vector<ll> a(n) ;
  for(ll i=0;i<n;i++)cin>>a[i] ;
    cin>>m ;
  vector<ll> b(m) ;
  for(ll i=0;i<m;i++)cin>>b[i] ;
    sort(b.begin(), b.end());
    sort(a.begin(), a.end()) ;
    for(ll i=0;i<n;i++)
  {
      for(ll j=0;j<m;j++)
      {
        if(a[i]!=-1&&b[j]!=-1)
        {
          if(abs(a[i]-b[j])<=1)
          {
            ct++ ;
          //  cout<<a[i]<<" "<<b[j]<<endl ;
            a[i]=-1 ;
            b[j]=-1 ;
            break ;
          }
        }
      }
  }
 cout<<ct<<endl ;


  return 0;
}