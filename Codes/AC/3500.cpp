#include<bits/stdc++.h>
#define ll long long
#define loop int a[n]; for(i=0;i<n;i++)
#define lloop ll a[n]; for(i=0;i<n;i++)
#define tcase int t; cin>>t; while(t--)
#define max(a,b) (a>b?a:b)
#define check(a,b) for(int i=0;i<b;i++) cout<<a[i]<<' '; cout<<endl;
#define pb push_back
#define min(a,b) (a<b?a:b)
#define g(a) (a*(a-1))/2
#define fi first
#define se second
#define M 1000000007
#define pi 3.14159265
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  //freopen("input.txt","r",stdin);
  ll n;
  cin>>n;
  ll r=n;
  ll l=0;
  ll p,v,m;
  while(r-l>1) {
    m=(r+l)/2;
    p=n;
    v=0;
    while(p) {
      v+=min(m,p);
      p-=min(m,p);
      p-=(p/10);
    }
    if(2*v<n)
      l=m;
    else
      r=m;
  }
  cout<<r;
} 
