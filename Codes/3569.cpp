#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll inf = 1LL<<60;
ll mod = 1000000007;

using namespace std;

ull a[200010], b[200010], c[200010], d[200010];

int BS(int lo, int hi, ull mana){
  int idx = -1;
  hi--;
  while(lo<=hi){
    int mid = (lo+hi)/2;
    if(d[mid]<=mana){
      idx = mid;
      lo = mid+1;
    }
    else hi = mid-1;
  }
  return idx;
}

int main(void){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  //freopen("in.in","r",stdin);
  ull n, m, k, s, x;
  cin >> n >> m >> k >> x >> s;
  for(int i=0 ; i<m ; i++) cin >> a[i];
  for(int i=0 ; i<m ; i++) cin >> b[i];
  for(int i=0 ; i<k ; i++) cin >> c[i];
  for(int i=0 ; i<k ; i++) cin >> d[i];
  ull ans = x*n;
  for(int i=0 ; i<m ; i++){
    if(s<b[i]){
      continue;
    }
    ull mana = s-b[i];
    int idx = BS(0, k, mana);
    if(idx == -1){
      ans = min(ans, n*a[i]);
    }
    else{
      ull B;
      if(n>=c[idx]) B = n-c[idx];
      else B = 0;
      ans = min(ans, a[i]*B);
    }
  }
  for(int i=0 ; i<k ; i++){
    if(s>=d[i]){
      ull B;
      if(n>=c[i]) B = n-c[i];
      else B = 0;
      ans = min(ans, x*B);
    }
  }
  cout << ans;
  return 0;
}
