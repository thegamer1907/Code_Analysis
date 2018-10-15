
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    ll n,i;ll a;
    ll s=0ll;
    ll m=0;

   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a;
       s+=a;
        m=max(m,a);
   }
   cout<<max((ll)ceil(s*1.0/(n-1)),m);
    return 0;
}

