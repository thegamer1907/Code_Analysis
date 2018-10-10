#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <map>
#define  pb push_back
#define  pf push_front
#define  S second
#define  F first
#define ra ragham
#define ll long long
using namespace std;
typedef pair<ll,ll> pii ;
typedef pair<char,char> cii ;
//setprecision(8)
//ios_base::sync_with_stdio(false);
ll n ;
ll l ;
int a[1100] ;
double p ;
double ans ;

int main()
{
  cin >> n >> l ;
  for(ll y= 0 ; y < n ; y++)
  cin >> a[y];
  sort(a , a+n);
  ans = max(l-a[n-1],1LL*a[0]);
  for(ll y = 1 ; y <= n-1 ; y++)
  {
      p = a[y];
      p-=a[y-1];
      p/=2;
      ans=max(ans,p);
  }
  cout<<setprecision(9)<<ans;

}