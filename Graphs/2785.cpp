#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test() ull t;cin>>t;while(t--)
#define pb push_back
#define mkp make_pair
#define nl cout<<endl
#define MOD 1000000007
#define loop(i,start,end) for(ull i=start;i<end;i++)
#define N 100001
#define oa(a,n) for(int i=0;i<n;i++)cout<<a[i]<<" ";nl
#define ov(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";nl
int main() 
{
    fastio();
    #ifndef ONLINE_JUDGE
      freopen("in.txt","r",stdin);
      freopen("out.txt","w",stdout);
    #endif
  ll n,m;cin>>n>>m; ll ans=1e6;
  vector<ll>v(n);
  loop(i,0,n)cin>>v[i],ans=min(ans,v[i]);
  map<int,set<int> >col;
  loop(i,0,m)
  {
  	int x,y;
  	cin>>x>>y;
  	x--;y--;
  	if(v[x]!=v[y])
  		col[v[x]].insert(v[y]),col[v[y]].insert(v[x]);
  }
  unsigned long mx=0;
  for(auto i:col)
  {
  	// cout<<i.first<<" "<<i.second.size()<<endl;
  	if(mx<i.second.size())
  	{
  		mx=i.second.size();
  		ans=i.first;
  		// cout<<i.first<<" "<<v[i.first]<<endl;
  	}
  	else if(mx==i.second.size())
  		ans=min((int)ans,i.first);
  }
  cout<<ans<<endl;

  return 0;
}