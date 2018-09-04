#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll inf = 1LL << 62;
ll mod = 1000000007;

using namespace std;

ll n, last = 0;
pair<ll,ll> a[100010];

ll Get(ll k){
  ll R = 0;
  for(ll i=1 ; i<=n ; i++){
    a[i].first-=last*a[i].second;
    a[i].first+=k*a[i].second;
  }
  last = k;
  sort(a+1, a+n+1);
  for(ll i=1 ; i<=k ; i++) R+=a[i].first;
  return R;
}

int main(void){
  //freopen("in.in","r",stdin);
  ll S;
  scanf("%I64d%I64d", &n, &S);
  for(ll i=1 ; i<=n ; i++) scanf("%I64d", &a[i].first), a[i].second = i;
  ll lo = 0, hi = n, mid, k, T;
  ll temp;
  while(lo<=hi){
    mid = (lo+hi)/2;
    temp = Get(mid);
    if(temp<=S){
      T = temp, k = mid, lo = mid+1;
    }
    else hi = mid-1;
  }
  printf("%I64d %I64d", k, T);
  return 0;
}
