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


int main()
{
  fastio
  dsc1(n,ll);
  ll a[n+5];
  int f=0;
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
    if(a[i]==0)
    {
      f=1;
    }
  }
  if(f)
  {
  ll dp[n+5][2];
  memset(dp,0,sizeof(dp));
  for(int i=1;i<=n;i++)
  {
    dp[i][a[i]]=dp[i-1][a[i]]+1;
    dp[i][1-a[i]]=dp[i-1][1-a[i]];
  }
  int ans=0;
  for(int i=1;i<=n;i++)
  {
    for(int j=i;j<=n;j++)
    {
      int t1=dp[j][1]-dp[i-1][1];
      int t2=dp[j][0]-dp[i-1][0];
      int s1=dp[n][1]-t1+(t2);
      ans=max(s1,ans);
    }
  }
  cout<<ans;
}
else
{
  cout<<n-1;
}
nl
  return 0;
}