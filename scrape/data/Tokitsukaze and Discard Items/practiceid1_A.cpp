#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll N = 1e5 + 5, MOD = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   ll n,m,k;
   cin>>n>>m>>k;
   ll arr[m];
   for(int i=0;i<m;i++)
   cin>>arr[i];
 
   ll ans=0;
   ll i=0;
   ll g=m;
   ll c=0;
 
  while(i<g)
   {
       ans++;
       ll x=(arr[c]-c)%k;
       if(x!=0)
       x=k-x;
     //  cout<<x<<endl;
 
      while(arr[i]<=arr[c]+x && i<g)
       {
           i++;
 
       }
       c=i;
      // cout<<c<<endl;
 
 
 
   }
   cout<<ans;
 
 
}