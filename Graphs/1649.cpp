#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
const ll mod = 1e9 +7, N = 1e5 + 7;

int main()
{
   ll n,m;
   cin>>n>>m;
   ll arr[n-1];
   for(ll i=0;i<n-1;i++){
       cin>>arr[i];
   }
   ll pos = 0;
   m--;
   while(pos<m){
       pos = pos+arr[pos];
       if(pos==m){
           cout<<"YES";
           return 0;
       }
   }
   cout<<"NO";
}
