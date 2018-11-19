/*
 * Aishwariya Singha Roy (RiuSRoy), NitS
*/
#include <bits/stdc++.h>
#define ll long long
#define loop(i,s,e) for (ll i=s;i<=e;i++)
#define pool(i,s,e) for(ll i=s;i>=e;i--)
#define riu() ll t;cin>>t;while(t--)
#define vis(v,size) vector <ll> v(size);
#define vi(v) vector <ll> v;
#define pb(n) push_back(n)
#define mp(a,b) make_pair(a,b)
#define fill(a,value) memset(a,value,sizeof(a)) 
#define MOD 1000000007
#define v2d(v,m,n) vector < vector < ll > > v(m,vector<ll> (n,0));
#define PI  3.14159265358979323846
#define MAX 1000005
#define vpi(v) vector <pair <ll,ll> > v
#define debug() cout<<"######"<<endl 
#define all(v) v.begin(),v.end()
#define vit set<ll >::iterator
using namespace std;
ll power(ll x,ll y)
{
    int res = 1;
    x = x % MOD; 
    while (y > 0)
    {
        if (y & 1)
            res = (res%MOD*x%MOD) % MOD;
        y = y>>1;
        x = (x%MOD*x%MOD) % MOD;  
    }
    return res;
}
int main()
{ 
  ios_base::sync_with_stdio(false);
  char a,b;
  cin>>a>>b;
  bool f=0,g=0;
  riu()
  {
    char c,d;
    cin>>c>>d;
    if(c==b)
    {
      f=1;
    }
    if(d==a)
    {
      g=1;
    }
    if(c==a&&b==d)
    {
        f=1;
        g=1;
    }
  }
  if(f&&g)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }

  return 0;
}