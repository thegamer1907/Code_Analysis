#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
ll max(ll a,ll b)
{
    if(a>b)
    return a;
    return b;
}
 
ll min(ll a,ll b)
{
    return a+b-max(a,b);
}
ll mod(ll a,ll b)
{
    if(a>b)
    return a-b;
    else
    return b-a;
}
ll power(ll x,ll y, ll p)
{
    ll res = 1;      
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x)%p;
        y = y>>1; 
        x = (x*x)%p;  
    }
    return res;
}
#define f first
#define s second

#define MOD 1000000007
#define PI 3.14159265
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastio;
     ll n;
     cin>>n;
     vector<string> vec(n+1);
     for(ll i=0;i<n;i++)
     cin>>vec[i];

     for(ll i=n-2;i>=0;i--)
     {
         if(vec[i]>vec[i+1])
         {
          string pref;
          ll len=min(vec[i].size(),vec[i+1].size());
          ll k=0;
          while(k<len && vec[i][k]==vec[i+1][k])
          {
              pref.pb(vec[i][k]);
              k++;
          }
          vec[i]=pref;
         }
     }
     for(ll i=0;i<n;i++)
     cout<<vec[i]<<"\n";
}