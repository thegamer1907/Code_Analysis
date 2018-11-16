#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
using namespace std;
#define pf push_front
#define pb push_back
#define FOR(i,begin,end) for (LL i=begin;i<=end;i++)
#define rep(i,t) for (LL i=0;i<t;i++)
#define pii pair<int,int>
#define pi pair<pii,LL>
#define X first
#define int long long 
#define Y second
#define fast cin.tie(0),cout.tie(0),ios::sync_with_stdio(false)
#define ordered_set(TYPE) tree<TYPE, null_type, less<TYPE>, rb_tree_tag, tree_order_statistics_node_update>
typedef long long LL;
const LL maxN=2e5+7,MOD=1e9+7,INF=1e12+7,N=1e5+17,sqr=450,base=427,_log=42,delta=10273;
int n,ans;
string a,b;
main()
{
  fast;
  cin>>n>>a>>b;
  rep(i,n-1)
  {
    if(a[i]!=b[i] && a[i]==b[i+1] && b[i]==a[i+1])
        swap(a[i],a[i+1]),ans++;
  }
  rep(i,n)
  {
    if(a[i]!=b[i])
        ans++;
  }
  return cout<<ans<<'\n',0;
}
