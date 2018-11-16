#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <cstdio>
#include <iomanip>
#include <stack>
#include <set>
#include <map>
#include <ctime>
#include <algorithm>
#include <cmath>
#define PI 3.1415926535897932384626433832795l
#define PII -3.1415926535897932384626433832795l
#define IOS ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define deci(n) cout<<fixed<<setprecision(n);
#define F first
#define S second
#define mk make_pair
#define pb push_back
#define ALPHA 26

using namespace std;

typedef long long int llp;
typedef long double ld;
const llp INF=(1LL<<60)-1;
const llp MAX = 100000000001;
const llp mod = 1000000007;
std::vector<int> edge[30001];
int check = 0;

llp fast_exp(llp base,llp exp,llp m){
  llp res=1;
  while(exp>0){
    if(exp%2==1){
      res=(res*base)%m;
    }
    base=(base*base)%m;
    exp/=2;
  }
  return res%m;
}

/*
llp gcdquery(llp l, llp r, llp start, llp end, llp index)
  {
    if(r < start || end < l)  return 0;
    if(l <= start && end <= r)  return segm[index];
    llp mid = (start + end)>>1;
    llp p1 = gcdquery(l,r,start,mid,2*index+1);
    llp p2 = gcdquery(l,r,mid+1,end,2*index+2);
    return __gcd(p1,p2);
  }

llp gcdbuildtree(llp l,llp r,llp index)
 {
   if(l==r) {
     segm[index] = a[l];
     return a[l];
   }
   llp mid = (l+r)>>1;
   segm[index] = __gcd(gcdbuildtree(l,mid,2*index+1) , gcdbuildtree(mid+1,r,2*index+2));
   return segm[index];
 }
*/
void dfs(int v,int t)
 {
   if(v == t) check++;
    for(int i = 0; i < edge[v].size(); i++)
     {
       dfs(edge[v][i],t);
     }
 }

int main()
{
    IOS;
   int n,t;
   cin >> n >> t;
   int a[n] = {0};
   for(int i = 1; i < n; i++) cin >> a[i];
   for(int i = 1; i < n; i++)
    {
      edge[i].pb(i+a[i]);
    }
    dfs(1,t);
    if(check > 0) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
