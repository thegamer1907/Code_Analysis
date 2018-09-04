#include <iostream>
#include <iterator>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define forin for(i=0;i<n;i++)
ll pwr(ll base, ll p){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}
 
ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}



int main(){
   //ios_base::sync_with_stdio(false);
    ll n,i,j,k,x,y,ans=0;
    sf("%lld%lld",&n,&k);
    ll a[n];
    forin {sf("%lld",&a[i]);}
    map<ll,ll> prev,curr;
    
    for(i=0;i<n;i++)
    {
     if(a[i]%k==0)
     {
         ans+=prev[a[i]/k];
         prev[a[i]]+=curr[a[i]/k];
     }
     curr[a[i]]++;
    }
    pf("%lld\n",ans);
    
   
   
    return 0;
}