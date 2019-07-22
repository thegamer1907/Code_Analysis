#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
int main()
{
   ll n,m,k;
   cin>>n>>m>>k;
   ll last = k;
   ll a[m];
   for(ll i=0;i<m;i++)   cin>>a[i];
   ll previous = 0;
   ll ans = 0;
   while(1)
   {
       ll temp = upper_bound(a,a+m,k)-a;
       if(temp==previous)  k = k + last;
       else
       k = k +  temp - previous,ans++; 
       if(temp>=m)  break;
       previous = temp;
   }
   cout<<ans;
}