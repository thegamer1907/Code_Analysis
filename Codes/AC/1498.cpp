#include <bits/stdc++.h>
//#include <ext/hash_map>
using namespace std;
using namespace __gnu_cxx;

#define EPS      1e-9
#define F        first
#define S        second
#define pi       acos(-1)
#define ll       long long
#define inf      0x3f3f3f3f
#define sz(x)    (int)x.size()
#define sc(x)    scanf("%d",&x)
#define all(x)   x.begin(),x.end()
#define rall(x)  x.rbegin(),x.rend()

int n,s;
int a[100100];
ll cost[100100];

ll get(int k){
  for(int i=0;i<n;++i)
    cost[i]=a[i]+(i+1)*1LL*k;
  sort(cost,cost+n);
  ll sum=0;
  for(int i=0;i<k;++i)
    sum+=cost[i];
  return sum;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
#endif
  sc(n),sc(s);
  for(int i=0;i<n;++i)
    sc(a[i]);
  int l=0,r=n,mid;
  while(l<r){
    mid=l+(r-l+1)/2;
    if(get(mid)<=s)l=mid;
    else r=mid-1;
  }
  cout<<l<<" "<<get(l)<<endl;
  return 0;
}