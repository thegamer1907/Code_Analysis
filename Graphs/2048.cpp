#include <iostream>
#include <iosfwd>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cassert>
#include <cctype>
#include <climits>
#include <vector>
#include <bitset>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <deque>
#include <string>
#include <list>
#include <iterator>
#include <sstream>
#include <complex>
#include <fstream>
#include <functional>
#include <numeric>
#include <utility>
#include <algorithm>
#include <assert.h>
#include <unordered_map>
 
using namespace std;
 
 
//defines   
#define dsc1(a,type) type a; cin>>a;
#define dsc2(a,b,type) type a,b; cin>>a>>b;
#define dsc3(a, b, c,type) type a,b,c; cin>>a>>b>>c;
#define dsc4(a, b, c, d,type) type a ,b,c,d; cin>>a>>b>>c>>d;
#define nl    cout<<"\n";
#define PI 3.14159265
 
 
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define MAXN 1000005
 
 
typedef long long int ll;
typedef unsigned long long ull;
ll a[2000005],m,n;
vector<ll> v[2000005];
ll ans=0;

void solve(ll parent,ll node,ll count,ll mx)
{
  if(v[node].size()==1&&v[node][0]==parent)
  {
    if(a[node]==1)
    {
      count++;
    }
    if(max(count,mx)<=m)
    {
      ans++;
    }
  }
  for(int i=0;i<v[node].size();i++)
  {
    if(v[node][i]!=parent)
    {
      if(a[node]==1)
      {
        solve(node,v[node][i],count+1,mx);
      }
      else
      {
        solve(node,v[node][i],0,max(count,mx));
      }
    }
  }
}

int main()
{
  fastio
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n-1;i++)
  {
    dsc2(x,y,ll);
    v[x].push_back(y);
    v[y].push_back(x);
  }
  solve(0,1,0,0);
  cout<<ans;
  nl
  return 0;
}