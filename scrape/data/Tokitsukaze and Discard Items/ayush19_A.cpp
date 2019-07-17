#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr(g,f,h) for(ll g=f;g<h;g++)
#define br(g,f,h) for(ll g=f;g<h;g--)
#define all(v) v.begin(),v.end()
#define new cout<<endl
ll mod(ll x)
{
     if(x<0)
         return -x;
     return x; 
 }
ll expo(ll x,ll y)
{
     ll res = 1;
     while(y>0)
    {
     if(y%2==1)
         res = (res*x);
     y=y>>1;
     x=x*x;
    }
     return res;
}
using namespace std;
 const int MAXN = 500005;
vector<ll> v;
ll a[1000000],b[1000000];

int main()
{
     ios_base::sync_with_stdio(false);
     ll n,t,m,k,x,y;
     cin>>n>>m>>k;
     fr(i,0,m)
     cin>>a[i];
     sort(a,a+m);
     x=k;y=0;
     ll f=0;
     ll ans=0;
     ll i=0;
     while(i<m){
         if(x+y>=a[i])
         {
            //  cout<<x<<y<<endl;
             f++;
            i++; 
             continue;
         }
         else
         {
            //  cout<<x<<y<<a[i]<<endl;
             if(f>0)
             ans++;
             y+=f;
            //  while(x+y<a[i])
            //  x+=k;
             ll o = a[i] - (x+y);
             o = o/k;
             x+=o*k;
             if(x+y<a[i])
             {
                 x+= k;
             }
             
            //  cout<<x<<y<<endl;?
            //  x+=k;
            //  y+=f;
             f=0;
         }
     }
     if(f>0)
     ans++;
     
    cout<<ans;

     return 0;
}