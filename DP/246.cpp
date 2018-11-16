#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define war(i,s,n) for(long long i=s;i<n;i++)
#define pb push_back
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mp make_pair
#define fr first
#define sc second
#define ot(x) cout<<x<<"\n";
#define mod 1000000007
#define vctr vector<long long>
#define pll pair<long long,long long>

////////////////**************///////////////////////////////////////////
int main()

{
  ll n,m;
  cin>>n;
  ll b[n];
  multiset<ll> s;
  war(i,0,n)
  {cin>>b[i];
    s.insert(b[i]);
  }
  cin>>m;
  ll g[m];
  war(i,0,m)
  cin>>g[i];
  sort(g,g+m);
  ll ans=0;
  war(i,0,m)
  {
    if(s.find(g[i]-1)!=s.end())
    {
      ans++;
      multiset<ll>::iterator it=s.find(g[i]-1);
      s.erase(it);
      continue;
    }
    if(s.find(g[i])!=s.end())
    {
      ans++;
      multiset<ll>::iterator it=s.find(g[i]);
      s.erase(it);
      continue;
    }
    if(s.find(g[i]+1)!=s.end())
    {
      ans++;
      multiset<ll>::iterator it=s.find(g[i]+1);
      s.erase(it);
    }
  }
  ot(ans);


}
