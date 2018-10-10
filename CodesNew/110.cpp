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

using namespace std;

typedef long long int llp;
typedef long double ld;
const llp INF=(1LL<<60)-1;
const llp MAX = 1000000000;
const llp mod = 1000000007;
typedef pair<int,int> P;
std::map<llp, llp> mp,ap;

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
typedef struct  node
{
   int a,b,c;
}node;
*/

/*
bool comp (llp &a,llp &b)
{
  return d[a] < d[b];
}
*/
/*
void updatetree(int node, int start, int end, int idx, int val,int temp)
{
    if(start == end)
    {
        a[idx] = val;
        segment[node] = val;
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
        {
            temp--;
            updatetree(2*node+1, start, mid, idx, val,temp);
        }
        else
        {
            temp--;
            updatetree(2*node+2, mid+1, end, idx, val,temp);
        }
        if(temp%2) segment[node] = segment[2*node+1] ^ segment[2*node+2];
        else segment[node] = segment[2*node+1] | segment[2*node+2];
    }
}

int buildtree(int l,int r,int index,int temp)
 {
   if(l==r)
   {
     segment[index] = a[l];
     return a[l];
   }
   int mid = (l+r)>>1;
   if(temp%2==0)
    {
      temp--;
      segment[index] = buildtree(l,mid,2*index+1,temp)^buildtree(mid+1,r,2*index+2,temp);
    }
   else
    {
      temp--;
      segment[index] = buildtree(l,mid,2*index+1,temp)|buildtree(mid+1,r,2*index+2,temp);
    }
   return segment[index];
 }
*/

int main()
 {
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    IOS;
    int n;
    ld l;
    cin >> n >> l;
    ld a[n+1] = {0};
    ld prev = 0;
    for(int i=1;i<=n;i++)
     {
       cin >> a[i];
     }
     sort(a+1,a+n+1);
     ld ans = -1;
     for(int i=2;i<=n;i++)
      {
        ans = max(ans,(a[i]-a[i-1])/2);
      }
         if((a[1])>ans) ans = a[1];
      if((l-a[n])>ans) ans = (l-a[n]);
      //ans = max(ans,l-a[n]);
      deci(15);
      cout << ans << '\n';
    return 0;
 }
