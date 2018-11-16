#include <bits/stdc++.h> 
using namespace std; 
  #define ll long long
ll MAX = 10000000006;  
#define ios  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main() {
   ios;
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   ll max=arr[k-1];
   ll ans=0;
   for(ll i=0;i<n;i++)
   {
       if(arr[i]>=max&&arr[i]!=0)
       ans++;
   }
   
   cout<<ans;
	return 0;
}
