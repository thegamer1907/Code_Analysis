#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll inf = 1LL << 62;
ll mod = 1000000007;

using namespace std;
ll n, m, k;

ll check(ll mid){
  ll cnt = 0;
  for(int i=1 ; i<=n ; i++){
    cnt += min((mid-1)/i, m);
  }
  return cnt;
}

int main(void){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  //freopen("in.in","r",stdin);

  cin >> n >> m >> k;
  ll lo = 1, hi = n*m, mid, ans = n*m+1;
  while(lo<=hi){
    mid = (lo+hi)/2;
    ll cnt = check(mid);
    if(cnt<k){
      ans = min(ans, mid);
      lo = mid+1;
    }
    else hi = mid-1;
  }
  cout << hi;
  return 0;
}
