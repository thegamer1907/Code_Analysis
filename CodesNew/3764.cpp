#include<bits/stdc++.h>
#define ll long long
#define R return
#define C continue
#define B break
using namespace std;
ll mod=1e18+9;
ll poww(ll x,ll y){
    if (y==0) R 1;
    if (x==1) R 1;
    if (x==0) R 0;
    if (y==1) R x;
    ll d=poww(x,y/2);
    d%=mod;
    if (y%2) R (((d*d)%mod)*x)%mod;
    R (d*d)%mod;
}
vector <pair<int,int> > adj ;
 pair <int,int> ad;
int main(){
 ll n,m;
 cin>>n>>m;
 ll q=m;
 ll a[n];
 for(ll i=0;i<n;i++)cin>>a[i];
 sort(a,a+n);
 ll x=1;
 if(n==1)
 {
     cout<<a[n-1]+m<<" "<<a[n-1]+m;R 0;
 }
 for(ll i=n-2;i>=0;i--)
 {
     if(a[i]==a[i+1]&&x!=0)
     {
         C;
     }
     else
     {
        x=0;
        m-=(a[n-1]-a[i]);
     }
 }
 ll y;
 if(m<=0) cout<<a[n-1]<<" ";
 else {if(m%n==0)y=0;
 else y=1;
        cout<<a[n-1]+(m/n+y)<<" ";}
 cout<<a[n-1]+q;
  return 0;
}
