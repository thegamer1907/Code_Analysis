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
  dsc2(n,t,ll);
  ll a[n];
  ll dp[n];
  ll dp2[n];
  memset(dp,0,sizeof(dp));
  memset(dp2,0,sizeof(dp2));
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=n-1;i>=0;i--)
  {
    if(i==n-1)
    {
      dp[i]=a[i];
    }
    else
    {
      dp[i]=dp[i+1]+a[i];
    }
  }
  ll ans=0;
  int j=n;
  ll x=0;
  if(a[n-1]<=t)
  {
  dp2[n-1]=1;
}
  int i=n-2;
  for(i=n-2;i>=0;i--)
  {
    while(dp[i]-x>t)
    {
      j--;
      x=dp[j];
    }
    dp2[i]=j-i;
  }
  for(int i=0;i<n;i++)
  {
    ans=max(ans,dp2[i]);
  }
  cout<<ans;
  nl
  return 0;
}
