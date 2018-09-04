#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 ll n,m,k;
 
 ll solve(ll x)
 {  ll r=0;
    for (ll i=1;i<=n;i++)
    r+=min(m,x/i);
    return r;
 }
 
 ll bs()
 { ll inf=1;
   ll sup=n*m;
   ll mid;
   while(inf!=sup)
   {  mid=(inf+sup)/2;
       if (solve(mid)<k) { inf=mid+1;}
       else sup=mid;
   }
   return inf;
 }
 
 int main()
 { cin>>n>>m>>k;
   if (k==1) {cout<<1; return 0;}
   
   
   cout<<bs();
 }